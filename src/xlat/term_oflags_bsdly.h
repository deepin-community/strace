/* Generated by ./src/xlat/gen.sh from ./src/xlat/term_oflags_bsdly.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat term_oflags_bsdly in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data term_oflags_bsdly_xdata[] = {
#if defined(BS1) || (defined(HAVE_DECL_BS1) && HAVE_DECL_BS1)
  XLAT(BS1),
 #define XLAT_VAL_0 ((unsigned) (BS1))
 #define XLAT_STR_0 STRINGIFY(BS1)
#endif
#if defined(BS0) || (defined(HAVE_DECL_BS0) && HAVE_DECL_BS0)
  XLAT(BS0),
 #define XLAT_VAL_1 ((unsigned) (BS0))
 #define XLAT_STR_1 STRINGIFY(BS0)
#endif
};
static
const struct xlat term_oflags_bsdly[1] = { {
 .data = term_oflags_bsdly_xdata,
 .size = ARRAY_SIZE(term_oflags_bsdly_xdata),
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
