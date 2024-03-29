/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_input_status_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_POWER) == (0x00000001), "V4L2_IN_ST_NO_POWER != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_SIGNAL) == (0x00000002), "V4L2_IN_ST_NO_SIGNAL != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_COLOR) == (0x00000004), "V4L2_IN_ST_NO_COLOR != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_HFLIP) == (0x00000010), "V4L2_IN_ST_HFLIP != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_VFLIP) == (0x00000020), "V4L2_IN_ST_VFLIP != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_H_LOCK) == (0x00000100), "V4L2_IN_ST_NO_H_LOCK != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_COLOR_KILL) == (0x00000200), "V4L2_IN_ST_COLOR_KILL != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_V_LOCK) == (0x00000400), "V4L2_IN_ST_NO_V_LOCK != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_STD_LOCK) == (0x00000800), "V4L2_IN_ST_NO_STD_LOCK != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_SYNC) == (0x00010000), "V4L2_IN_ST_NO_SYNC != 0x00010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_EQU) == (0x00020000), "V4L2_IN_ST_NO_EQU != 0x00020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_CARRIER) == (0x00040000), "V4L2_IN_ST_NO_CARRIER != 0x00040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_MACROVISION) == (0x01000000), "V4L2_IN_ST_MACROVISION != 0x01000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_NO_ACCESS) == (0x02000000), "V4L2_IN_ST_NO_ACCESS != 0x02000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_IN_ST_VTR) == (0x04000000), "V4L2_IN_ST_VTR != 0x04000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_input_status_flags[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_input_status_flags_xdata[] = {
 XLAT(V4L2_IN_ST_NO_POWER),
 #define XLAT_VAL_0 ((unsigned) (V4L2_IN_ST_NO_POWER))
 #define XLAT_STR_0 STRINGIFY(V4L2_IN_ST_NO_POWER)
 XLAT(V4L2_IN_ST_NO_SIGNAL),
 #define XLAT_VAL_1 ((unsigned) (V4L2_IN_ST_NO_SIGNAL))
 #define XLAT_STR_1 STRINGIFY(V4L2_IN_ST_NO_SIGNAL)
 XLAT(V4L2_IN_ST_NO_COLOR),
 #define XLAT_VAL_2 ((unsigned) (V4L2_IN_ST_NO_COLOR))
 #define XLAT_STR_2 STRINGIFY(V4L2_IN_ST_NO_COLOR)
 XLAT(V4L2_IN_ST_HFLIP),
 #define XLAT_VAL_3 ((unsigned) (V4L2_IN_ST_HFLIP))
 #define XLAT_STR_3 STRINGIFY(V4L2_IN_ST_HFLIP)
 XLAT(V4L2_IN_ST_VFLIP),
 #define XLAT_VAL_4 ((unsigned) (V4L2_IN_ST_VFLIP))
 #define XLAT_STR_4 STRINGIFY(V4L2_IN_ST_VFLIP)
 XLAT(V4L2_IN_ST_NO_H_LOCK),
 #define XLAT_VAL_5 ((unsigned) (V4L2_IN_ST_NO_H_LOCK))
 #define XLAT_STR_5 STRINGIFY(V4L2_IN_ST_NO_H_LOCK)
 XLAT(V4L2_IN_ST_COLOR_KILL),
 #define XLAT_VAL_6 ((unsigned) (V4L2_IN_ST_COLOR_KILL))
 #define XLAT_STR_6 STRINGIFY(V4L2_IN_ST_COLOR_KILL)
 XLAT(V4L2_IN_ST_NO_V_LOCK),
 #define XLAT_VAL_7 ((unsigned) (V4L2_IN_ST_NO_V_LOCK))
 #define XLAT_STR_7 STRINGIFY(V4L2_IN_ST_NO_V_LOCK)
 XLAT(V4L2_IN_ST_NO_STD_LOCK),
 #define XLAT_VAL_8 ((unsigned) (V4L2_IN_ST_NO_STD_LOCK))
 #define XLAT_STR_8 STRINGIFY(V4L2_IN_ST_NO_STD_LOCK)
 XLAT(V4L2_IN_ST_NO_SYNC),
 #define XLAT_VAL_9 ((unsigned) (V4L2_IN_ST_NO_SYNC))
 #define XLAT_STR_9 STRINGIFY(V4L2_IN_ST_NO_SYNC)
 XLAT(V4L2_IN_ST_NO_EQU),
 #define XLAT_VAL_10 ((unsigned) (V4L2_IN_ST_NO_EQU))
 #define XLAT_STR_10 STRINGIFY(V4L2_IN_ST_NO_EQU)
 XLAT(V4L2_IN_ST_NO_CARRIER),
 #define XLAT_VAL_11 ((unsigned) (V4L2_IN_ST_NO_CARRIER))
 #define XLAT_STR_11 STRINGIFY(V4L2_IN_ST_NO_CARRIER)
 XLAT(V4L2_IN_ST_MACROVISION),
 #define XLAT_VAL_12 ((unsigned) (V4L2_IN_ST_MACROVISION))
 #define XLAT_STR_12 STRINGIFY(V4L2_IN_ST_MACROVISION)
 XLAT(V4L2_IN_ST_NO_ACCESS),
 #define XLAT_VAL_13 ((unsigned) (V4L2_IN_ST_NO_ACCESS))
 #define XLAT_STR_13 STRINGIFY(V4L2_IN_ST_NO_ACCESS)
 XLAT(V4L2_IN_ST_VTR),
 #define XLAT_VAL_14 ((unsigned) (V4L2_IN_ST_VTR))
 #define XLAT_STR_14 STRINGIFY(V4L2_IN_ST_VTR)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_input_status_flags[1] = { {
 .data = v4l2_input_status_flags_xdata,
 .size = ARRAY_SIZE(v4l2_input_status_flags_xdata),
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
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
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
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
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
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
