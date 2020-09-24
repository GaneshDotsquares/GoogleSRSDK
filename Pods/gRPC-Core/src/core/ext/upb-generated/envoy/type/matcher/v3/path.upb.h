/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/path.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_V3_PATH_PROTO_UPB_H_
#define ENVOY_TYPE_MATCHER_V3_PATH_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_matcher_v3_PathMatcher;
typedef struct envoy_type_matcher_v3_PathMatcher envoy_type_matcher_v3_PathMatcher;
extern const upb_msglayout envoy_type_matcher_v3_PathMatcher_msginit;
struct envoy_type_matcher_v3_StringMatcher;
extern const upb_msglayout envoy_type_matcher_v3_StringMatcher_msginit;


/* envoy.type.matcher.v3.PathMatcher */

UPB_INLINE envoy_type_matcher_v3_PathMatcher *envoy_type_matcher_v3_PathMatcher_new(upb_arena *arena) {
  return (envoy_type_matcher_v3_PathMatcher *)_upb_msg_new(&envoy_type_matcher_v3_PathMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_v3_PathMatcher *envoy_type_matcher_v3_PathMatcher_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_matcher_v3_PathMatcher *ret = envoy_type_matcher_v3_PathMatcher_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_type_matcher_v3_PathMatcher_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_type_matcher_v3_PathMatcher_serialize(const envoy_type_matcher_v3_PathMatcher *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_matcher_v3_PathMatcher_msginit, arena, len);
}

typedef enum {
  envoy_type_matcher_v3_PathMatcher_rule_path = 1,
  envoy_type_matcher_v3_PathMatcher_rule_NOT_SET = 0
} envoy_type_matcher_v3_PathMatcher_rule_oneofcases;
UPB_INLINE envoy_type_matcher_v3_PathMatcher_rule_oneofcases envoy_type_matcher_v3_PathMatcher_rule_case(const envoy_type_matcher_v3_PathMatcher* msg) { return (envoy_type_matcher_v3_PathMatcher_rule_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(4, 8), int32_t); }

UPB_INLINE bool envoy_type_matcher_v3_PathMatcher_has_path(const envoy_type_matcher_v3_PathMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 1; }
UPB_INLINE const struct envoy_type_matcher_v3_StringMatcher* envoy_type_matcher_v3_PathMatcher_path(const envoy_type_matcher_v3_PathMatcher *msg) { return UPB_READ_ONEOF(msg, const struct envoy_type_matcher_v3_StringMatcher*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 1, NULL); }

UPB_INLINE void envoy_type_matcher_v3_PathMatcher_set_path(envoy_type_matcher_v3_PathMatcher *msg, struct envoy_type_matcher_v3_StringMatcher* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_type_matcher_v3_StringMatcher*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 1);
}
UPB_INLINE struct envoy_type_matcher_v3_StringMatcher* envoy_type_matcher_v3_PathMatcher_mutable_path(envoy_type_matcher_v3_PathMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_v3_StringMatcher* sub = (struct envoy_type_matcher_v3_StringMatcher*)envoy_type_matcher_v3_PathMatcher_path(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_v3_StringMatcher*)_upb_msg_new(&envoy_type_matcher_v3_StringMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_v3_PathMatcher_set_path(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_TYPE_MATCHER_V3_PATH_PROTO_UPB_H_ */
