/* Generated by ./src/xlat/gen.sh from ./src/xlat/genl_ctrl_attr_op_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat genl_ctrl_attr_op_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data genl_ctrl_attr_op_flags_xdata[] = {

 XLAT(GENL_ADMIN_PERM),
 #define XLAT_VAL_0 ((unsigned) (GENL_ADMIN_PERM))
 #define XLAT_STR_0 STRINGIFY(GENL_ADMIN_PERM)
 XLAT(GENL_CMD_CAP_DO),
 #define XLAT_VAL_1 ((unsigned) (GENL_CMD_CAP_DO))
 #define XLAT_STR_1 STRINGIFY(GENL_CMD_CAP_DO)
 XLAT(GENL_CMD_CAP_DUMP),
 #define XLAT_VAL_2 ((unsigned) (GENL_CMD_CAP_DUMP))
 #define XLAT_STR_2 STRINGIFY(GENL_CMD_CAP_DUMP)
 XLAT(GENL_CMD_CAP_HASPOL),
 #define XLAT_VAL_3 ((unsigned) (GENL_CMD_CAP_HASPOL))
 #define XLAT_STR_3 STRINGIFY(GENL_CMD_CAP_HASPOL)
 XLAT(GENL_UNS_ADMIN_PERM),
 #define XLAT_VAL_4 ((unsigned) (GENL_UNS_ADMIN_PERM))
 #define XLAT_STR_4 STRINGIFY(GENL_UNS_ADMIN_PERM)
};
static
const struct xlat genl_ctrl_attr_op_flags[1] = { {
 .data = genl_ctrl_attr_op_flags_xdata,
 .size = ARRAY_SIZE(genl_ctrl_attr_op_flags_xdata),
 .type = XT_NORMAL,
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
