/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_sliced_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_sliced_flags[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_sliced_flags_xdata[] = {
 XLAT(V4L2_SLICED_VBI_625),
 #define XLAT_VAL_0 ((unsigned) (V4L2_SLICED_VBI_625))
 #define XLAT_STR_0 STRINGIFY(V4L2_SLICED_VBI_625)
 XLAT(V4L2_SLICED_TELETEXT_B),
 #define XLAT_VAL_1 ((unsigned) (V4L2_SLICED_TELETEXT_B))
 #define XLAT_STR_1 STRINGIFY(V4L2_SLICED_TELETEXT_B)
 XLAT(V4L2_SLICED_VPS),
 #define XLAT_VAL_2 ((unsigned) (V4L2_SLICED_VPS))
 #define XLAT_STR_2 STRINGIFY(V4L2_SLICED_VPS)
 XLAT(V4L2_SLICED_CAPTION_525),
 #define XLAT_VAL_3 ((unsigned) (V4L2_SLICED_CAPTION_525))
 #define XLAT_STR_3 STRINGIFY(V4L2_SLICED_CAPTION_525)
 XLAT(V4L2_SLICED_WSS_625),
 #define XLAT_VAL_4 ((unsigned) (V4L2_SLICED_WSS_625))
 #define XLAT_STR_4 STRINGIFY(V4L2_SLICED_WSS_625)

};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_sliced_flags[1] = { {
 .data = v4l2_sliced_flags_xdata,
 .size = ARRAY_SIZE(v4l2_sliced_flags_xdata),
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
