/* Generated by ./src/xlat/gen.sh from ./src/xlat/genl_ioam6_cmd.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat genl_ioam6_cmd in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data genl_ioam6_cmd_xdata[] = {

 [IOAM6_CMD_UNSPEC] = XLAT(IOAM6_CMD_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (IOAM6_CMD_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(IOAM6_CMD_UNSPEC)

 [IOAM6_CMD_ADD_NAMESPACE] = XLAT(IOAM6_CMD_ADD_NAMESPACE),
 #define XLAT_VAL_1 ((unsigned) (IOAM6_CMD_ADD_NAMESPACE))
 #define XLAT_STR_1 STRINGIFY(IOAM6_CMD_ADD_NAMESPACE)
 [IOAM6_CMD_DEL_NAMESPACE] = XLAT(IOAM6_CMD_DEL_NAMESPACE),
 #define XLAT_VAL_2 ((unsigned) (IOAM6_CMD_DEL_NAMESPACE))
 #define XLAT_STR_2 STRINGIFY(IOAM6_CMD_DEL_NAMESPACE)
 [IOAM6_CMD_DUMP_NAMESPACES] = XLAT(IOAM6_CMD_DUMP_NAMESPACES),
 #define XLAT_VAL_3 ((unsigned) (IOAM6_CMD_DUMP_NAMESPACES))
 #define XLAT_STR_3 STRINGIFY(IOAM6_CMD_DUMP_NAMESPACES)

 [IOAM6_CMD_ADD_SCHEMA] = XLAT(IOAM6_CMD_ADD_SCHEMA),
 #define XLAT_VAL_4 ((unsigned) (IOAM6_CMD_ADD_SCHEMA))
 #define XLAT_STR_4 STRINGIFY(IOAM6_CMD_ADD_SCHEMA)
 [IOAM6_CMD_DEL_SCHEMA] = XLAT(IOAM6_CMD_DEL_SCHEMA),
 #define XLAT_VAL_5 ((unsigned) (IOAM6_CMD_DEL_SCHEMA))
 #define XLAT_STR_5 STRINGIFY(IOAM6_CMD_DEL_SCHEMA)
 [IOAM6_CMD_DUMP_SCHEMAS] = XLAT(IOAM6_CMD_DUMP_SCHEMAS),
 #define XLAT_VAL_6 ((unsigned) (IOAM6_CMD_DUMP_SCHEMAS))
 #define XLAT_STR_6 STRINGIFY(IOAM6_CMD_DUMP_SCHEMAS)

 [IOAM6_CMD_NS_SET_SCHEMA] = XLAT(IOAM6_CMD_NS_SET_SCHEMA),
 #define XLAT_VAL_7 ((unsigned) (IOAM6_CMD_NS_SET_SCHEMA))
 #define XLAT_STR_7 STRINGIFY(IOAM6_CMD_NS_SET_SCHEMA)
};
static
const struct xlat genl_ioam6_cmd[1] = { {
 .data = genl_ioam6_cmd_xdata,
 .size = ARRAY_SIZE(genl_ioam6_cmd_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
