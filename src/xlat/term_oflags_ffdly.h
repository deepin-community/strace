/* Generated by ./src/xlat/gen.sh from ./src/xlat/term_oflags_ffdly.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat term_oflags_ffdly in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data term_oflags_ffdly_xdata[] = {
#if defined(FF0) || (defined(HAVE_DECL_FF0) && HAVE_DECL_FF0)
  XLAT(FF0),
 #define XLAT_VAL_0 ((unsigned) (FF0))
 #define XLAT_STR_0 STRINGIFY(FF0)
#endif
#if defined(FF1) || (defined(HAVE_DECL_FF1) && HAVE_DECL_FF1)
  XLAT(FF1),
 #define XLAT_VAL_1 ((unsigned) (FF1))
 #define XLAT_STR_1 STRINGIFY(FF1)
#endif
};
static
const struct xlat term_oflags_ffdly[1] = { {
 .data = term_oflags_ffdly_xdata,
 .size = ARRAY_SIZE(term_oflags_ffdly_xdata),
 .type = XT_NORMAL,
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
