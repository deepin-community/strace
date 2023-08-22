/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_nexthop_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_UNSPEC) == (0), "NHA_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_ID) == (1), "NHA_ID != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_GROUP) == (2), "NHA_GROUP != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_GROUP_TYPE) == (3), "NHA_GROUP_TYPE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_BLACKHOLE) == (4), "NHA_BLACKHOLE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_OIF) == (5), "NHA_OIF != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_GATEWAY) == (6), "NHA_GATEWAY != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_ENCAP_TYPE) == (7), "NHA_ENCAP_TYPE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_ENCAP) == (8), "NHA_ENCAP != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_GROUPS) == (9), "NHA_GROUPS != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_MASTER) == (10), "NHA_MASTER != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_FDB) == (11), "NHA_FDB != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_RES_GROUP) == (12), "NHA_RES_GROUP != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_RES_BUCKET) == (13), "NHA_RES_BUCKET != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_nexthop_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_nexthop_attrs_xdata[] = {
 [NHA_UNSPEC] = XLAT(NHA_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (NHA_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(NHA_UNSPEC)
 [NHA_ID] = XLAT(NHA_ID),
 #define XLAT_VAL_1 ((unsigned) (NHA_ID))
 #define XLAT_STR_1 STRINGIFY(NHA_ID)
 [NHA_GROUP] = XLAT(NHA_GROUP),
 #define XLAT_VAL_2 ((unsigned) (NHA_GROUP))
 #define XLAT_STR_2 STRINGIFY(NHA_GROUP)
 [NHA_GROUP_TYPE] = XLAT(NHA_GROUP_TYPE),
 #define XLAT_VAL_3 ((unsigned) (NHA_GROUP_TYPE))
 #define XLAT_STR_3 STRINGIFY(NHA_GROUP_TYPE)
 [NHA_BLACKHOLE] = XLAT(NHA_BLACKHOLE),
 #define XLAT_VAL_4 ((unsigned) (NHA_BLACKHOLE))
 #define XLAT_STR_4 STRINGIFY(NHA_BLACKHOLE)
 [NHA_OIF] = XLAT(NHA_OIF),
 #define XLAT_VAL_5 ((unsigned) (NHA_OIF))
 #define XLAT_STR_5 STRINGIFY(NHA_OIF)
 [NHA_GATEWAY] = XLAT(NHA_GATEWAY),
 #define XLAT_VAL_6 ((unsigned) (NHA_GATEWAY))
 #define XLAT_STR_6 STRINGIFY(NHA_GATEWAY)
 [NHA_ENCAP_TYPE] = XLAT(NHA_ENCAP_TYPE),
 #define XLAT_VAL_7 ((unsigned) (NHA_ENCAP_TYPE))
 #define XLAT_STR_7 STRINGIFY(NHA_ENCAP_TYPE)
 [NHA_ENCAP] = XLAT(NHA_ENCAP),
 #define XLAT_VAL_8 ((unsigned) (NHA_ENCAP))
 #define XLAT_STR_8 STRINGIFY(NHA_ENCAP)
 [NHA_GROUPS] = XLAT(NHA_GROUPS),
 #define XLAT_VAL_9 ((unsigned) (NHA_GROUPS))
 #define XLAT_STR_9 STRINGIFY(NHA_GROUPS)
 [NHA_MASTER] = XLAT(NHA_MASTER),
 #define XLAT_VAL_10 ((unsigned) (NHA_MASTER))
 #define XLAT_STR_10 STRINGIFY(NHA_MASTER)
 [NHA_FDB] = XLAT(NHA_FDB),
 #define XLAT_VAL_11 ((unsigned) (NHA_FDB))
 #define XLAT_STR_11 STRINGIFY(NHA_FDB)
 [NHA_RES_GROUP] = XLAT(NHA_RES_GROUP),
 #define XLAT_VAL_12 ((unsigned) (NHA_RES_GROUP))
 #define XLAT_STR_12 STRINGIFY(NHA_RES_GROUP)
 [NHA_RES_BUCKET] = XLAT(NHA_RES_BUCKET),
 #define XLAT_VAL_13 ((unsigned) (NHA_RES_BUCKET))
 #define XLAT_STR_13 STRINGIFY(NHA_RES_BUCKET)
};
static
const struct xlat rtnl_nexthop_attrs[1] = { {
 .data = rtnl_nexthop_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_nexthop_attrs_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
