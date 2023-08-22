/* Generated by ./src/xlat/gen.sh from ./src/xlat/termio_cc.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat termio_cc in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data termio_cc_xdata[] = {
#if defined(_VINTR) || (defined(HAVE_DECL__VINTR) && HAVE_DECL__VINTR)
  XLAT(_VINTR),
 #define XLAT_VAL_0 ((unsigned) (_VINTR))
 #define XLAT_STR_0 STRINGIFY(_VINTR)
#endif
#if defined(_VQUIT) || (defined(HAVE_DECL__VQUIT) && HAVE_DECL__VQUIT)
  XLAT(_VQUIT),
 #define XLAT_VAL_1 ((unsigned) (_VQUIT))
 #define XLAT_STR_1 STRINGIFY(_VQUIT)
#endif
#if defined(_VERASE) || (defined(HAVE_DECL__VERASE) && HAVE_DECL__VERASE)
  XLAT(_VERASE),
 #define XLAT_VAL_2 ((unsigned) (_VERASE))
 #define XLAT_STR_2 STRINGIFY(_VERASE)
#endif
#if defined(_VKILL) || (defined(HAVE_DECL__VKILL) && HAVE_DECL__VKILL)
  XLAT(_VKILL),
 #define XLAT_VAL_3 ((unsigned) (_VKILL))
 #define XLAT_STR_3 STRINGIFY(_VKILL)
#endif
#if defined(_VEOF) || (defined(HAVE_DECL__VEOF) && HAVE_DECL__VEOF)
  XLAT(_VEOF),
 #define XLAT_VAL_4 ((unsigned) (_VEOF))
 #define XLAT_STR_4 STRINGIFY(_VEOF)
#endif
#if defined(_VMIN) || (defined(HAVE_DECL__VMIN) && HAVE_DECL__VMIN)
  XLAT(_VMIN),
 #define XLAT_VAL_5 ((unsigned) (_VMIN))
 #define XLAT_STR_5 STRINGIFY(_VMIN)
#endif
#if defined(_VEOL) || (defined(HAVE_DECL__VEOL) && HAVE_DECL__VEOL)
  XLAT(_VEOL),
 #define XLAT_VAL_6 ((unsigned) (_VEOL))
 #define XLAT_STR_6 STRINGIFY(_VEOL)
#endif
#if defined(_VTIME) || (defined(HAVE_DECL__VTIME) && HAVE_DECL__VTIME)
  XLAT(_VTIME),
 #define XLAT_VAL_7 ((unsigned) (_VTIME))
 #define XLAT_STR_7 STRINGIFY(_VTIME)
#endif
#if defined(_VEOL2) || (defined(HAVE_DECL__VEOL2) && HAVE_DECL__VEOL2)
  XLAT(_VEOL2),
 #define XLAT_VAL_8 ((unsigned) (_VEOL2))
 #define XLAT_STR_8 STRINGIFY(_VEOL2)
#endif
#if defined(_VSWTC) || (defined(HAVE_DECL__VSWTC) && HAVE_DECL__VSWTC)
  XLAT(_VSWTC),
 #define XLAT_VAL_9 ((unsigned) (_VSWTC))
 #define XLAT_STR_9 STRINGIFY(_VSWTC)
#endif
};
static
const struct xlat termio_cc[1] = { {
 .data = termio_cc_xdata,
 .size = ARRAY_SIZE(termio_cc_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
