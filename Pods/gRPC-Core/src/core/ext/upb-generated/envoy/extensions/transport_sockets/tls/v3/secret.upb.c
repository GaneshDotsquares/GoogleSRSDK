/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/secret.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/extensions/transport_sockets/tls/v3/secret.upb.h"
#else
  #include  "envoy/extensions/transport_sockets/tls/v3/secret.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/base.upb.h"
#else
  #include  "envoy/config/core/v3/base.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/config_source.upb.h"
#else
  #include  "envoy/config/core/v3/config_source.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/extensions/transport_sockets/tls/v3/common.upb.h"
#else
  #include  "envoy/extensions/transport_sockets/tls/v3/common.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/sensitive.upb.h"
#else
  #include  "udpa/annotations/sensitive.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/status.upb.h"
#else
  #include  "udpa/annotations/status.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/versioning.upb.h"
#else
  #include  "udpa/annotations/versioning.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_extensions_transport_sockets_tls_v3_GenericSecret_submsgs[1] = {
  &envoy_config_core_v3_DataSource_msginit,
};

static const upb_msglayout_field envoy_extensions_transport_sockets_tls_v3_GenericSecret__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_GenericSecret_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_GenericSecret__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_submsgs[1] = {
  &envoy_config_core_v3_ConfigSource_msginit,
};

static const upb_msglayout_field envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_extensions_transport_sockets_tls_v3_Secret_submsgs[4] = {
  &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit,
  &envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit,
  &envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit,
  &envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit,
};

static const upb_msglayout_field envoy_extensions_transport_sockets_tls_v3_Secret__fields[5] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 2, 11, 1},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 3, 11, 1},
  {4, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
  {5, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, 1},
};

const upb_msglayout envoy_extensions_transport_sockets_tls_v3_Secret_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_Secret_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_Secret__fields[0],
  UPB_SIZE(16, 32), 5, false,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

