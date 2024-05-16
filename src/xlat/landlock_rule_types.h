/* Generated by ./src/xlat/gen.sh from ./src/xlat/landlock_rule_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat landlock_rule_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data landlock_rule_types_xdata[] = {
 [LANDLOCK_RULE_PATH_BENEATH] = XLAT(LANDLOCK_RULE_PATH_BENEATH),
 #define XLAT_VAL_0 ((unsigned) (LANDLOCK_RULE_PATH_BENEATH))
 #define XLAT_STR_0 STRINGIFY(LANDLOCK_RULE_PATH_BENEATH)
 [LANDLOCK_RULE_NET_PORT] = XLAT(LANDLOCK_RULE_NET_PORT),
 #define XLAT_VAL_1 ((unsigned) (LANDLOCK_RULE_NET_PORT))
 #define XLAT_STR_1 STRINGIFY(LANDLOCK_RULE_NET_PORT)
};
static
const struct xlat landlock_rule_types[1] = { {
 .data = landlock_rule_types_xdata,
 .size = ARRAY_SIZE(landlock_rule_types_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
