/* Generated by ./src/xlat/gen.sh from ./src/xlat/genl_seg6_cmd.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat genl_seg6_cmd in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data genl_seg6_cmd_xdata[] = {

 [SEG6_CMD_UNSPEC] = XLAT(SEG6_CMD_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (SEG6_CMD_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(SEG6_CMD_UNSPEC)
 [SEG6_CMD_SETHMAC] = XLAT(SEG6_CMD_SETHMAC),
 #define XLAT_VAL_1 ((unsigned) (SEG6_CMD_SETHMAC))
 #define XLAT_STR_1 STRINGIFY(SEG6_CMD_SETHMAC)
 [SEG6_CMD_DUMPHMAC] = XLAT(SEG6_CMD_DUMPHMAC),
 #define XLAT_VAL_2 ((unsigned) (SEG6_CMD_DUMPHMAC))
 #define XLAT_STR_2 STRINGIFY(SEG6_CMD_DUMPHMAC)
 [SEG6_CMD_SET_TUNSRC] = XLAT(SEG6_CMD_SET_TUNSRC),
 #define XLAT_VAL_3 ((unsigned) (SEG6_CMD_SET_TUNSRC))
 #define XLAT_STR_3 STRINGIFY(SEG6_CMD_SET_TUNSRC)
 [SEG6_CMD_GET_TUNSRC] = XLAT(SEG6_CMD_GET_TUNSRC),
 #define XLAT_VAL_4 ((unsigned) (SEG6_CMD_GET_TUNSRC))
 #define XLAT_STR_4 STRINGIFY(SEG6_CMD_GET_TUNSRC)
};
static
const struct xlat genl_seg6_cmd[1] = { {
 .data = genl_seg6_cmd_xdata,
 .size = ARRAY_SIZE(genl_seg6_cmd_xdata),
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
