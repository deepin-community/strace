/* Generated by ./src/xlat/gen.sh from ./src/xlat/perf_type_id.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PERF_TYPE_HARDWARE) || (defined(HAVE_DECL_PERF_TYPE_HARDWARE) && HAVE_DECL_PERF_TYPE_HARDWARE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_TYPE_HARDWARE) == (0), "PERF_TYPE_HARDWARE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_TYPE_HARDWARE 0
#endif
#if defined(PERF_TYPE_SOFTWARE) || (defined(HAVE_DECL_PERF_TYPE_SOFTWARE) && HAVE_DECL_PERF_TYPE_SOFTWARE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_TYPE_SOFTWARE) == (1), "PERF_TYPE_SOFTWARE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_TYPE_SOFTWARE 1
#endif
#if defined(PERF_TYPE_TRACEPOINT) || (defined(HAVE_DECL_PERF_TYPE_TRACEPOINT) && HAVE_DECL_PERF_TYPE_TRACEPOINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_TYPE_TRACEPOINT) == (2), "PERF_TYPE_TRACEPOINT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_TYPE_TRACEPOINT 2
#endif
#if defined(PERF_TYPE_HW_CACHE) || (defined(HAVE_DECL_PERF_TYPE_HW_CACHE) && HAVE_DECL_PERF_TYPE_HW_CACHE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_TYPE_HW_CACHE) == (3), "PERF_TYPE_HW_CACHE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_TYPE_HW_CACHE 3
#endif
#if defined(PERF_TYPE_RAW) || (defined(HAVE_DECL_PERF_TYPE_RAW) && HAVE_DECL_PERF_TYPE_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_TYPE_RAW) == (4), "PERF_TYPE_RAW != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_TYPE_RAW 4
#endif
#if defined(PERF_TYPE_BREAKPOINT) || (defined(HAVE_DECL_PERF_TYPE_BREAKPOINT) && HAVE_DECL_PERF_TYPE_BREAKPOINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_TYPE_BREAKPOINT) == (5), "PERF_TYPE_BREAKPOINT != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_TYPE_BREAKPOINT 5
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data perf_type_id_xdata[] = {
 [PERF_TYPE_HARDWARE] = XLAT(PERF_TYPE_HARDWARE),
 #define XLAT_VAL_0 ((unsigned) (PERF_TYPE_HARDWARE))
 #define XLAT_STR_0 STRINGIFY(PERF_TYPE_HARDWARE)
 [PERF_TYPE_SOFTWARE] = XLAT(PERF_TYPE_SOFTWARE),
 #define XLAT_VAL_1 ((unsigned) (PERF_TYPE_SOFTWARE))
 #define XLAT_STR_1 STRINGIFY(PERF_TYPE_SOFTWARE)
 [PERF_TYPE_TRACEPOINT] = XLAT(PERF_TYPE_TRACEPOINT),
 #define XLAT_VAL_2 ((unsigned) (PERF_TYPE_TRACEPOINT))
 #define XLAT_STR_2 STRINGIFY(PERF_TYPE_TRACEPOINT)
 [PERF_TYPE_HW_CACHE] = XLAT(PERF_TYPE_HW_CACHE),
 #define XLAT_VAL_3 ((unsigned) (PERF_TYPE_HW_CACHE))
 #define XLAT_STR_3 STRINGIFY(PERF_TYPE_HW_CACHE)
 [PERF_TYPE_RAW] = XLAT(PERF_TYPE_RAW),
 #define XLAT_VAL_4 ((unsigned) (PERF_TYPE_RAW))
 #define XLAT_STR_4 STRINGIFY(PERF_TYPE_RAW)
 [PERF_TYPE_BREAKPOINT] = XLAT(PERF_TYPE_BREAKPOINT),
 #define XLAT_VAL_5 ((unsigned) (PERF_TYPE_BREAKPOINT))
 #define XLAT_STR_5 STRINGIFY(PERF_TYPE_BREAKPOINT)
};
const struct xlat perf_type_id[1] = { {
 .data = perf_type_id_xdata,
 .size = ARRAY_SIZE(perf_type_id_xdata),
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
