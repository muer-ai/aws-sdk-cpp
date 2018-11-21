﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once

#include <aws/core/client/CoreErrors.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>

namespace Aws
{
namespace CloudFront
{
enum class CloudFrontErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  BATCH_TOO_LARGE= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS,
  CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS,
  CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE,
  C_N_A_M_E_ALREADY_EXISTS,
  DISTRIBUTION_ALREADY_EXISTS,
  DISTRIBUTION_NOT_DISABLED,
  FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS,
  FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE,
  FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS,
  FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE,
  FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED,
  ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR,
  ILLEGAL_UPDATE,
  INCONSISTENT_QUANTITIES,
  INVALID_ARGUMENT,
  INVALID_DEFAULT_ROOT_OBJECT,
  INVALID_ERROR_CODE,
  INVALID_FORWARD_COOKIES,
  INVALID_GEO_RESTRICTION_PARAMETER,
  INVALID_HEADERS_FOR_S3_ORIGIN,
  INVALID_IF_MATCH_VERSION,
  INVALID_LAMBDA_FUNCTION_ASSOCIATION,
  INVALID_LOCATION_CODE,
  INVALID_MINIMUM_PROTOCOL_VERSION,
  INVALID_ORIGIN,
  INVALID_ORIGIN_ACCESS_IDENTITY,
  INVALID_ORIGIN_KEEPALIVE_TIMEOUT,
  INVALID_ORIGIN_READ_TIMEOUT,
  INVALID_PROTOCOL_SETTINGS,
  INVALID_QUERY_STRING_PARAMETERS,
  INVALID_RELATIVE_PATH,
  INVALID_REQUIRED_PROTOCOL,
  INVALID_RESPONSE_CODE,
  INVALID_TAGGING,
  INVALID_T_T_L_ORDER,
  INVALID_VIEWER_CERTIFICATE,
  INVALID_WEB_A_C_L_ID,
  MISSING_BODY,
  NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY,
  NO_SUCH_DISTRIBUTION,
  NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG,
  NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE,
  NO_SUCH_INVALIDATION,
  NO_SUCH_ORIGIN,
  NO_SUCH_PUBLIC_KEY,
  NO_SUCH_RESOURCE,
  NO_SUCH_STREAMING_DISTRIBUTION,
  PRECONDITION_FAILED,
  PUBLIC_KEY_ALREADY_EXISTS,
  PUBLIC_KEY_IN_USE,
  QUERY_ARG_PROFILE_EMPTY,
  STREAMING_DISTRIBUTION_ALREADY_EXISTS,
  STREAMING_DISTRIBUTION_NOT_DISABLED,
  TOO_MANY_CACHE_BEHAVIORS,
  TOO_MANY_CERTIFICATES,
  TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES,
  TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST,
  TOO_MANY_DISTRIBUTIONS,
  TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG,
  TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS,
  TOO_MANY_DISTRIBUTION_C_N_A_M_ES,
  TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS,
  TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES,
  TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES,
  TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS,
  TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES,
  TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES,
  TOO_MANY_HEADERS_IN_FORWARDED_VALUES,
  TOO_MANY_INVALIDATIONS_IN_PROGRESS,
  TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS,
  TOO_MANY_ORIGINS,
  TOO_MANY_ORIGIN_CUSTOM_HEADERS,
  TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION,
  TOO_MANY_PUBLIC_KEYS,
  TOO_MANY_QUERY_STRING_PARAMETERS,
  TOO_MANY_STREAMING_DISTRIBUTIONS,
  TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES,
  TOO_MANY_TRUSTED_SIGNERS,
  TRUSTED_SIGNER_DOES_NOT_EXIST
};
namespace CloudFrontErrorMapper
{
  AWS_CLOUDFRONT_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CloudFront
} // namespace Aws
