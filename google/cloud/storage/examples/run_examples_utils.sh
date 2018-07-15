#!/usr/bin/env bash
#
# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -eu

if [ -z "${PROJECT_ROOT+x}" ]; then
  readonly PROJECT_ROOT="$(cd "$(dirname $0)/../../../.."; pwd)"
fi
source "${PROJECT_ROOT}/ci/colors.sh"

################################################
# Run a list of examples in a given program
# Globals:
#   COLOR_*: colorize output messages, defined in colors.sh
# Arguments:
#   program_name: the name of the program to run.
#   examples: a string with the list of examples to run, separated by commas
#   *: the base arguments that all commands need.
# Returns:
#   None
################################################
run_program_examples() {
  if [ $# -lt 3 ]; then
    echo "Usage: run_all_examples <program_name> [example ...]"
    exit 1
  fi

  local program_path=$1
  local example_list=$(echo $2 | tr ',' ' ')
  shift 2
  local base_arguments=$*

  local program_name=$(basename ${program_path})

  if [ ! -x ${program_name} ]; then
    echo "${COLOR_YELLOW}[  SKIPPED ]${COLOR_RESET}" \
        " ${program_name} is not compiled"
    return
  fi
  local object_name="object-$(date +%s)"
  for example in ${example_list}; do
    log="$(mktemp --tmpdir "storage_samples.XXXXXXXXXX.log")"
    echo    "${COLOR_GREEN}[ RUN      ]${COLOR_RESET}" \
        "${program_name} ${example} running"
    #
    # Magic list of examples that need additional arguments.
    #
    case ${example} in
        insert-object)
            other_arguments="a-short-string-to-put-in-the-object"
            ;;
        *)
            other_arguments=""
            ;;
    esac
    echo ${program_path} ${example} \
        ${base_arguments} ${other_arguments} >"${log}"
    ${program_path} ${example} \
        ${base_arguments} ${other_arguments} >>"${log}" 2>&1 </dev/null
    if [ $? = 0 ]; then
      echo  "${COLOR_GREEN}[       OK ]${COLOR_RESET}" \
          "${program_name} ${example}"
      continue
    else
      echo    "${COLOR_RED}[    ERROR ]${COLOR_RESET}" \
          "${program_name} ${example}"
      echo
      echo "================ [begin ${log}] ================"
      cat "${log}"
      echo "================ [end ${log}] ================"
      if [ -f "testbench.log" ]; then
        cat "testbench.log"
      fi
    fi
    /bin/rm -f "${log}"
  done

  log="$(mktemp --tmpdir "storage_samples.XXXXXXXXXX.log")"
  echo "${COLOR_GREEN}[ RUN      ]${COLOR_RESET}" \
      "${program_name} (no command) running"
  ${program_path} >"${log}" 2>&1 </dev/null
  # Note the inverted test, this is supposed to exit with 1.
  if [ $? != 0 ]; then
    echo "${COLOR_GREEN}[       OK ]${COLOR_RESET}" \
        "${program_name}" "(no command)"
  else
    echo   "${COLOR_RED}[    ERROR ]${COLOR_RESET}" \
        "${program_name}" "(no command)"
    echo
    echo "================ [begin ${log}] ================"
    cat "${log}"
    echo "================ [end ${log}] ================"
  fi
  /bin/rm -f "${log}"
}

################################################
# Run all Bucket examples.
# Globals:
#   COLOR_*: colorize output messages, defined in colors.sh
# Arguments:
#   bucket_name: the name of the bucket to run the examples against.
# Returns:
#   None
################################################
run_all_bucket_examples() {
  local bucket_name=$1
  shift

  # The list of commands in the storage_bucket_samples program that we will
  # test. Currently get-metadata assumes that $bucket_name is already created.
  readonly BUCKET_EXAMPLES_COMMANDS="list-buckets get-bucket-metadata list-objects"

  if [ ! -x storage_bucket_samples ]; then
    echo "${COLOR_YELLOW}[  SKIPPED ]${COLOR_RESET}" \
        " storage_bucket_samples is not compiled"
    return
  fi
  local object_name="object-$(date +%s)"
  for example in ${BUCKET_EXAMPLES_COMMANDS}; do
    log="$(mktemp --tmpdir "storage_bucket_samples_${example}.XXXXXXXXXX.log")"
    echo    "${COLOR_GREEN}[ RUN      ]${COLOR_RESET}" \
        "storage_bucket_samples ${example} running"
    ./storage_bucket_samples \
        ${example} "${bucket_name}" >"${log}" 2>&1 </dev/null
    if [ $? = 0 ]; then
      echo  "${COLOR_GREEN}[       OK ]${COLOR_RESET} ${example}"
      continue
    else
      echo    "${COLOR_RED}[    ERROR ]${COLOR_RESET} ${example}"
      echo
      echo "================ [begin ${log}] ================"
      cat "${log}"
      echo "================ [end ${log}] ================"
    fi
    /bin/rm -f "${log}"
  done

  log="$(mktemp --tmpdir "storage_bucket_samples_${example}.XXXXXXXXXX.log")"
  echo "${COLOR_GREEN}[ RUN      ]${COLOR_RESET}" \
      "storage_bucket_samples with no command running"
  ./storage_bucket_samples >"${log}" 2>&1 </dev/null
  # Note the inverted test, this is supposed to exit with 1.
  if [ $? != 0 ]; then
    echo "${COLOR_GREEN}[       OK ]${COLOR_RESET} (no command)"
  else
    echo   "${COLOR_RED}[    ERROR ]${COLOR_RESET} (no command)"
    echo
    echo "================ [begin ${log}] ================"
    cat "${log}"
    echo "================ [end ${log}] ================"
  fi
  /bin/rm -f "${log}"
}

################################################
# Run all Object examples.
# Globals:
#   COLOR_*: colorize output messages, defined in colors.sh
# Arguments:
#   bucket_name: the name of the bucket to run the examples against.
# Returns:
#   None
################################################
run_all_object_examples() {
  local bucket_name=$1
  shift

  # The list of commands in the storage_bucket_samples program that we will
  # test. Currently get-metadata assumes that $bucket_name is already created.
  readonly OBJECT_EXAMPLES_COMMANDS=$(cat <<_EOF_
insert-object
get-object-metadata
read-object
delete-object
_EOF_
)

  if [ ! -x storage_object_samples ]; then
    echo "${COLOR_YELLOW}[  SKIPPED ]${COLOR_RESET}" \
        " storage_object_samples is not compiled"
    return
  fi
  local object_name="object-$(date +%s)"
  for example in ${OBJECT_EXAMPLES_COMMANDS}; do
    log="$(mktemp --tmpdir "storage_object_samples.XXXXXXXXXX.log")"
    echo    "${COLOR_GREEN}[ RUN      ]${COLOR_RESET}" \
        "storage_object_samples ${example} running"
    case ${example} in
        insert-object)
            parameters="${object_name} a-short-string-to-put-in-the-object"
            ;;
        *)
            parameters="${object_name}"
            ;;
    esac
    ./storage_object_samples \
        ${example} "${bucket_name}" ${parameters} >"${log}" 2>&1 </dev/null
    if [ $? = 0 ]; then
      echo  "${COLOR_GREEN}[       OK ]${COLOR_RESET} ${example}"
      continue
    else
      echo    "${COLOR_RED}[    ERROR ]${COLOR_RESET} ${example}"
      echo
      echo "================ [begin ${log}] ================"
      cat "${log}"
      echo "================ [end ${log}] ================"
    fi
    /bin/rm -f "${log}"
  done

  log="$(mktemp --tmpdir "storage_object_samples.XXXXXXXXXX.log")"
  echo "${COLOR_GREEN}[ RUN      ]${COLOR_RESET}" \
      "storage_object_samples with no command running"
  ./storage_object_samples >"${log}" 2>&1 </dev/null
  # Note the inverted test, this is supposed to exit with 1.
  if [ $? != 0 ]; then
    echo "${COLOR_GREEN}[       OK ]${COLOR_RESET} (no command)"
  else
    echo   "${COLOR_RED}[    ERROR ]${COLOR_RESET} (no command)"
    echo
    echo "================ [begin ${log}] ================"
    cat "${log}"
    echo "================ [end ${log}] ================"
  fi
  /bin/rm -f "${log}"
}

################################################
# Run all Object examples.
# Globals:
#   COLOR_*: colorize output messages, defined in colors.sh
# Arguments:
#   bucket_name: the name of the bucket to run the examples against.
# Returns:
#   None
################################################
run_all_object_acl_examples() {
  local bucket_name=$1
  shift

  # The list of commands in the storage_bucket_samples program that we will
  # test. Currently get-metadata assumes that $bucket_name is already created.
  readonly OBJECT_ACL_COMMANDS=$(tr '\n' ',' <<_EOF_
list-object-acl
_EOF_
)

  # First create an object for the example:
  local object_name="object-$(date +%s)"
  if [ ! -x ./storage_object_samples ]; then
    echo "${COLOR_YELLOW}[  SKIPPED ]${COLOR_RESET}" \
        " storage_object_samples is not compiled"
    return
  fi
  ./storage_object_samples insert-object \
      "${bucket_name}" \
      "${object_name}" \
      "some-contents-does-not-matter-what"

  EXAMPLE_BASE_ARGUMENTS="${bucket_name} ${object_name}"
  run_program_examples ./storage_object_acl_samples \
      "${OBJECT_ACL_COMMANDS}" \
      "${bucket_name}" \
      "${object_name}"
}

################################################
# Run all the examples.
# Globals:
#   BUCKET_NAME: the name of the bucket to use in the examples.
#   COLOR_*: colorize output messages, defined in colors.sh
# Arguments:
#   None
# Returns:
#   None
################################################
run_all_storage_examples() {
  echo "${COLOR_GREEN}[ ======== ]${COLOR_RESET}" \
      " Running Google Cloud Storage Examples"
  set +e
  run_all_object_acl_examples "${BUCKET_NAME}"
  run_all_bucket_examples "${BUCKET_NAME}"
  run_all_object_examples "${BUCKET_NAME}"
  set -e
  echo "${COLOR_GREEN}[ ======== ]${COLOR_RESET}" \
      " Google Cloud Storage Examples Finished"
}
