/* Generated by ./src/xlat/gen.sh from ./src/xlat/packet_diag_show.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat packet_diag_show in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data packet_diag_show_xdata[] = {
 XLAT(PACKET_SHOW_INFO),
 #define XLAT_VAL_0 ((unsigned) (PACKET_SHOW_INFO))
 #define XLAT_STR_0 STRINGIFY(PACKET_SHOW_INFO)
 XLAT(PACKET_SHOW_MCLIST),
 #define XLAT_VAL_1 ((unsigned) (PACKET_SHOW_MCLIST))
 #define XLAT_STR_1 STRINGIFY(PACKET_SHOW_MCLIST)
 XLAT(PACKET_SHOW_RING_CFG),
 #define XLAT_VAL_2 ((unsigned) (PACKET_SHOW_RING_CFG))
 #define XLAT_STR_2 STRINGIFY(PACKET_SHOW_RING_CFG)
 XLAT(PACKET_SHOW_FANOUT),
 #define XLAT_VAL_3 ((unsigned) (PACKET_SHOW_FANOUT))
 #define XLAT_STR_3 STRINGIFY(PACKET_SHOW_FANOUT)
 XLAT(PACKET_SHOW_MEMINFO),
 #define XLAT_VAL_4 ((unsigned) (PACKET_SHOW_MEMINFO))
 #define XLAT_STR_4 STRINGIFY(PACKET_SHOW_MEMINFO)
 XLAT(PACKET_SHOW_FILTER),
 #define XLAT_VAL_5 ((unsigned) (PACKET_SHOW_FILTER))
 #define XLAT_STR_5 STRINGIFY(PACKET_SHOW_FILTER)
};
static
const struct xlat packet_diag_show[1] = { {
 .data = packet_diag_show_xdata,
 .size = ARRAY_SIZE(packet_diag_show_xdata),
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
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
