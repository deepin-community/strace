/* Generated by ./xlat/gen.sh from ./xlat/pidfd_open_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PIDFD_NONBLOCK) || (defined(HAVE_DECL_PIDFD_NONBLOCK) && HAVE_DECL_PIDFD_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PIDFD_NONBLOCK) == (O_NONBLOCK), "PIDFD_NONBLOCK != O_NONBLOCK");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PIDFD_NONBLOCK O_NONBLOCK
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pidfd_open_flags in mpers mode

# else

static const struct xlat_data pidfd_open_flags_xdata[] = {
 XLAT(PIDFD_NONBLOCK),
 #define XLAT_VAL_0 ((unsigned) (PIDFD_NONBLOCK))
 #define XLAT_STR_0 STRINGIFY(PIDFD_NONBLOCK)
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
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
