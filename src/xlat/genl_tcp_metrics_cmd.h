/* Generated by ./src/xlat/gen.sh from ./src/xlat/genl_tcp_metrics_cmd.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat genl_tcp_metrics_cmd in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data genl_tcp_metrics_cmd_xdata[] = {

 [TCP_METRICS_CMD_UNSPEC] = XLAT(TCP_METRICS_CMD_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (TCP_METRICS_CMD_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(TCP_METRICS_CMD_UNSPEC)
 [TCP_METRICS_CMD_GET] = XLAT(TCP_METRICS_CMD_GET),
 #define XLAT_VAL_1 ((unsigned) (TCP_METRICS_CMD_GET))
 #define XLAT_STR_1 STRINGIFY(TCP_METRICS_CMD_GET)
 [TCP_METRICS_CMD_DEL] = XLAT(TCP_METRICS_CMD_DEL),
 #define XLAT_VAL_2 ((unsigned) (TCP_METRICS_CMD_DEL))
 #define XLAT_STR_2 STRINGIFY(TCP_METRICS_CMD_DEL)
};
static
const struct xlat genl_tcp_metrics_cmd[1] = { {
 .data = genl_tcp_metrics_cmd_xdata,
 .size = ARRAY_SIZE(genl_tcp_metrics_cmd_xdata),
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
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
