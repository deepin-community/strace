/* Generated by ./src/xlat/gen.sh from ./src/xlat/pidfd_open_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PIDFD_NONBLOCK) || (defined(HAVE_DECL_PIDFD_NONBLOCK) && HAVE_DECL_PIDFD_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PIDFD_NONBLOCK) == (O_NONBLOCK), "PIDFD_NONBLOCK != O_NONBLOCK");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PIDFD_NONBLOCK O_NONBLOCK
#endif
#if defined(PIDFD_THREAD) || (defined(HAVE_DECL_PIDFD_THREAD) && HAVE_DECL_PIDFD_THREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PIDFD_THREAD) == (O_EXCL), "PIDFD_THREAD != O_EXCL");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PIDFD_THREAD O_EXCL
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pidfd_open_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data pidfd_open_flags_xdata[] = {
 XLAT(PIDFD_NONBLOCK),
 #define XLAT_VAL_0 ((unsigned) (PIDFD_NONBLOCK))
 #define XLAT_STR_0 STRINGIFY(PIDFD_NONBLOCK)
 XLAT(PIDFD_THREAD),
 #define XLAT_VAL_1 ((unsigned) (PIDFD_THREAD))
 #define XLAT_STR_1 STRINGIFY(PIDFD_THREAD)
};
static
const struct xlat pidfd_open_flags[1] = { {
 .data = pidfd_open_flags_xdata,
 .size = ARRAY_SIZE(pidfd_open_flags_xdata),
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
