/* Generated by ./src/xlat/gen.sh from ./src/xlat/term_oflags_tabdly.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#ifndef ALPHA
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat term_oflags_tabdly in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data term_oflags_tabdly_xdata[] = {
#ifndef ALPHA
#if defined(XTABS) || (defined(HAVE_DECL_XTABS) && HAVE_DECL_XTABS)
  XLAT(XTABS),
 #define XLAT_VAL_0 ((unsigned) (XTABS))
 #define XLAT_STR_0 STRINGIFY(XTABS)
#endif
#endif

#if defined(TAB0) || (defined(HAVE_DECL_TAB0) && HAVE_DECL_TAB0)
  XLAT(TAB0),
 #define XLAT_VAL_1 ((unsigned) (TAB0))
 #define XLAT_STR_1 STRINGIFY(TAB0)
#endif
#if defined(TAB1) || (defined(HAVE_DECL_TAB1) && HAVE_DECL_TAB1)
  XLAT(TAB1),
 #define XLAT_VAL_2 ((unsigned) (TAB1))
 #define XLAT_STR_2 STRINGIFY(TAB1)
#endif
#if defined(TAB2) || (defined(HAVE_DECL_TAB2) && HAVE_DECL_TAB2)
  XLAT(TAB2),
 #define XLAT_VAL_3 ((unsigned) (TAB2))
 #define XLAT_STR_3 STRINGIFY(TAB2)
#endif
#if defined(TAB3) || (defined(HAVE_DECL_TAB3) && HAVE_DECL_TAB3)
  XLAT(TAB3),
 #define XLAT_VAL_4 ((unsigned) (TAB3))
 #define XLAT_STR_4 STRINGIFY(TAB3)
#endif
};
static
const struct xlat term_oflags_tabdly[1] = { {
 .data = term_oflags_tabdly_xdata,
 .size = ARRAY_SIZE(term_oflags_tabdly_xdata),
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