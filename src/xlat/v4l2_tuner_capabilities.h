/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_tuner_capabilities.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_tuner_capabilities[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_tuner_capabilities_xdata[] = {
 XLAT(V4L2_TUNER_CAP_LOW),
 #define XLAT_VAL_0 ((unsigned) (V4L2_TUNER_CAP_LOW))
 #define XLAT_STR_0 STRINGIFY(V4L2_TUNER_CAP_LOW)
 XLAT(V4L2_TUNER_CAP_NORM),
 #define XLAT_VAL_1 ((unsigned) (V4L2_TUNER_CAP_NORM))
 #define XLAT_STR_1 STRINGIFY(V4L2_TUNER_CAP_NORM)
 XLAT(V4L2_TUNER_CAP_HWSEEK_BOUNDED),
 #define XLAT_VAL_2 ((unsigned) (V4L2_TUNER_CAP_HWSEEK_BOUNDED))
 #define XLAT_STR_2 STRINGIFY(V4L2_TUNER_CAP_HWSEEK_BOUNDED)
 XLAT(V4L2_TUNER_CAP_HWSEEK_WRAP),
 #define XLAT_VAL_3 ((unsigned) (V4L2_TUNER_CAP_HWSEEK_WRAP))
 #define XLAT_STR_3 STRINGIFY(V4L2_TUNER_CAP_HWSEEK_WRAP)
 XLAT(V4L2_TUNER_CAP_STEREO),
 #define XLAT_VAL_4 ((unsigned) (V4L2_TUNER_CAP_STEREO))
 #define XLAT_STR_4 STRINGIFY(V4L2_TUNER_CAP_STEREO)
 XLAT(V4L2_TUNER_CAP_LANG2),
 #define XLAT_VAL_5 ((unsigned) (V4L2_TUNER_CAP_LANG2))
 #define XLAT_STR_5 STRINGIFY(V4L2_TUNER_CAP_LANG2)

 XLAT(V4L2_TUNER_CAP_LANG1),
 #define XLAT_VAL_6 ((unsigned) (V4L2_TUNER_CAP_LANG1))
 #define XLAT_STR_6 STRINGIFY(V4L2_TUNER_CAP_LANG1)
 XLAT(V4L2_TUNER_CAP_RDS),
 #define XLAT_VAL_7 ((unsigned) (V4L2_TUNER_CAP_RDS))
 #define XLAT_STR_7 STRINGIFY(V4L2_TUNER_CAP_RDS)
 XLAT(V4L2_TUNER_CAP_RDS_BLOCK_IO),
 #define XLAT_VAL_8 ((unsigned) (V4L2_TUNER_CAP_RDS_BLOCK_IO))
 #define XLAT_STR_8 STRINGIFY(V4L2_TUNER_CAP_RDS_BLOCK_IO)
 XLAT(V4L2_TUNER_CAP_RDS_CONTROLS),
 #define XLAT_VAL_9 ((unsigned) (V4L2_TUNER_CAP_RDS_CONTROLS))
 #define XLAT_STR_9 STRINGIFY(V4L2_TUNER_CAP_RDS_CONTROLS)
 XLAT(V4L2_TUNER_CAP_FREQ_BANDS),
 #define XLAT_VAL_10 ((unsigned) (V4L2_TUNER_CAP_FREQ_BANDS))
 #define XLAT_STR_10 STRINGIFY(V4L2_TUNER_CAP_FREQ_BANDS)
 XLAT(V4L2_TUNER_CAP_HWSEEK_PROG_LIM),
 #define XLAT_VAL_11 ((unsigned) (V4L2_TUNER_CAP_HWSEEK_PROG_LIM))
 #define XLAT_STR_11 STRINGIFY(V4L2_TUNER_CAP_HWSEEK_PROG_LIM)
 XLAT(V4L2_TUNER_CAP_1HZ),
 #define XLAT_VAL_12 ((unsigned) (V4L2_TUNER_CAP_1HZ))
 #define XLAT_STR_12 STRINGIFY(V4L2_TUNER_CAP_1HZ)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_tuner_capabilities[1] = { {
 .data = v4l2_tuner_capabilities_xdata,
 .size = ARRAY_SIZE(v4l2_tuner_capabilities_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
