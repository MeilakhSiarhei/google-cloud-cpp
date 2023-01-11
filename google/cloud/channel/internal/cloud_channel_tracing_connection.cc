// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/internal/cloud_channel_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace channel_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudChannelServiceTracingConnection::CloudChannelServiceTracingConnection(
    std::shared_ptr<channel::CloudChannelServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingConnection::ListCustomers(
    google::cloud::channel::v1::ListCustomersRequest request) {
  return child_->ListCustomers(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingConnection::GetCustomer(
    google::cloud::channel::v1::GetCustomerRequest const& request) {
  return child_->GetCustomer(request);
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceTracingConnection::CheckCloudIdentityAccountsExist(
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request) {
  return child_->CheckCloudIdentityAccountsExist(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingConnection::CreateCustomer(
    google::cloud::channel::v1::CreateCustomerRequest const& request) {
  return child_->CreateCustomer(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingConnection::UpdateCustomer(
    google::cloud::channel::v1::UpdateCustomerRequest const& request) {
  return child_->UpdateCustomer(request);
}

Status CloudChannelServiceTracingConnection::DeleteCustomer(
    google::cloud::channel::v1::DeleteCustomerRequest const& request) {
  return child_->DeleteCustomer(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingConnection::ImportCustomer(
    google::cloud::channel::v1::ImportCustomerRequest const& request) {
  return child_->ImportCustomer(request);
}

future<StatusOr<google::cloud::channel::v1::Customer>>
CloudChannelServiceTracingConnection::ProvisionCloudIdentity(
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  return child_->ProvisionCloudIdentity(request);
}

StreamRange<google::cloud::channel::v1::Entitlement>
CloudChannelServiceTracingConnection::ListEntitlements(
    google::cloud::channel::v1::ListEntitlementsRequest request) {
  return child_->ListEntitlements(request);
}

StreamRange<google::cloud::channel::v1::TransferableSku>
CloudChannelServiceTracingConnection::ListTransferableSkus(
    google::cloud::channel::v1::ListTransferableSkusRequest request) {
  return child_->ListTransferableSkus(request);
}

StreamRange<google::cloud::channel::v1::TransferableOffer>
CloudChannelServiceTracingConnection::ListTransferableOffers(
    google::cloud::channel::v1::ListTransferableOffersRequest request) {
  return child_->ListTransferableOffers(request);
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceTracingConnection::GetEntitlement(
    google::cloud::channel::v1::GetEntitlementRequest const& request) {
  return child_->GetEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceTracingConnection::CreateEntitlement(
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  return child_->CreateEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceTracingConnection::ChangeParameters(
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  return child_->ChangeParameters(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceTracingConnection::ChangeRenewalSettings(
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  return child_->ChangeRenewalSettings(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceTracingConnection::ChangeOffer(
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  return child_->ChangeOffer(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceTracingConnection::StartPaidService(
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  return child_->StartPaidService(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceTracingConnection::SuspendEntitlement(
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  return child_->SuspendEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
CloudChannelServiceTracingConnection::CancelEntitlement(
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  return child_->CancelEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceTracingConnection::ActivateEntitlement(
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  return child_->ActivateEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::TransferEntitlementsResponse>>
CloudChannelServiceTracingConnection::TransferEntitlements(
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  return child_->TransferEntitlements(request);
}

future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
CloudChannelServiceTracingConnection::TransferEntitlementsToGoogle(
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  return child_->TransferEntitlementsToGoogle(request);
}

StreamRange<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceTracingConnection::ListChannelPartnerLinks(
    google::cloud::channel::v1::ListChannelPartnerLinksRequest request) {
  return child_->ListChannelPartnerLinks(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceTracingConnection::GetChannelPartnerLink(
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request) {
  return child_->GetChannelPartnerLink(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceTracingConnection::CreateChannelPartnerLink(
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
        request) {
  return child_->CreateChannelPartnerLink(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceTracingConnection::UpdateChannelPartnerLink(
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
        request) {
  return child_->UpdateChannelPartnerLink(request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceTracingConnection::GetCustomerRepricingConfig(
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
        request) {
  return child_->GetCustomerRepricingConfig(request);
}

StreamRange<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceTracingConnection::ListCustomerRepricingConfigs(
    google::cloud::channel::v1::ListCustomerRepricingConfigsRequest request) {
  return child_->ListCustomerRepricingConfigs(request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceTracingConnection::CreateCustomerRepricingConfig(
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
        request) {
  return child_->CreateCustomerRepricingConfig(request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceTracingConnection::UpdateCustomerRepricingConfig(
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
        request) {
  return child_->UpdateCustomerRepricingConfig(request);
}

Status CloudChannelServiceTracingConnection::DeleteCustomerRepricingConfig(
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
        request) {
  return child_->DeleteCustomerRepricingConfig(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceTracingConnection::GetChannelPartnerRepricingConfig(
    google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
        request) {
  return child_->GetChannelPartnerRepricingConfig(request);
}

StreamRange<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceTracingConnection::ListChannelPartnerRepricingConfigs(
    google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest
        request) {
  return child_->ListChannelPartnerRepricingConfigs(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceTracingConnection::CreateChannelPartnerRepricingConfig(
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const& request) {
  return child_->CreateChannelPartnerRepricingConfig(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceTracingConnection::UpdateChannelPartnerRepricingConfig(
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const& request) {
  return child_->UpdateChannelPartnerRepricingConfig(request);
}

Status
CloudChannelServiceTracingConnection::DeleteChannelPartnerRepricingConfig(
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const& request) {
  return child_->DeleteChannelPartnerRepricingConfig(request);
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceTracingConnection::LookupOffer(
    google::cloud::channel::v1::LookupOfferRequest const& request) {
  return child_->LookupOffer(request);
}

StreamRange<google::cloud::channel::v1::Product>
CloudChannelServiceTracingConnection::ListProducts(
    google::cloud::channel::v1::ListProductsRequest request) {
  return child_->ListProducts(request);
}

StreamRange<google::cloud::channel::v1::Sku>
CloudChannelServiceTracingConnection::ListSkus(
    google::cloud::channel::v1::ListSkusRequest request) {
  return child_->ListSkus(request);
}

StreamRange<google::cloud::channel::v1::Offer>
CloudChannelServiceTracingConnection::ListOffers(
    google::cloud::channel::v1::ListOffersRequest request) {
  return child_->ListOffers(request);
}

StreamRange<google::cloud::channel::v1::PurchasableSku>
CloudChannelServiceTracingConnection::ListPurchasableSkus(
    google::cloud::channel::v1::ListPurchasableSkusRequest request) {
  return child_->ListPurchasableSkus(request);
}

StreamRange<google::cloud::channel::v1::PurchasableOffer>
CloudChannelServiceTracingConnection::ListPurchasableOffers(
    google::cloud::channel::v1::ListPurchasableOffersRequest request) {
  return child_->ListPurchasableOffers(request);
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceTracingConnection::RegisterSubscriber(
    google::cloud::channel::v1::RegisterSubscriberRequest const& request) {
  return child_->RegisterSubscriber(request);
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceTracingConnection::UnregisterSubscriber(
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request) {
  return child_->UnregisterSubscriber(request);
}

StreamRange<std::string> CloudChannelServiceTracingConnection::ListSubscribers(
    google::cloud::channel::v1::ListSubscribersRequest request) {
  return child_->ListSubscribers(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_internal
}  // namespace cloud
}  // namespace google
