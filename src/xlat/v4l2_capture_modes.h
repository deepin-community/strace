/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_capture_modes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_capture_modes[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_capture_modes_xdata[] = {
 XLAT(V4L2_MODE_HIGHQUALITY),
 #define XLAT_VAL_0 ((unsigned) (V4L2_MODE_HIGHQUALITY))
 #define XLAT_STR_0 STRINGIFY(V4L2_MODE_HIGHQUALITY)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_capture_modes[1] = { {
 .data = v4l2_capture_modes_xdata,
 .size = ARRAY_SIZE(v4l2_capture_modes_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
