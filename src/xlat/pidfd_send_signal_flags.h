/* Generated by ./src/xlat/gen.sh from ./src/xlat/pidfd_send_signal_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PIDFD_SIGNAL_THREAD) || (defined(HAVE_DECL_PIDFD_SIGNAL_THREAD) && HAVE_DECL_PIDFD_SIGNAL_THREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PIDFD_SIGNAL_THREAD) == ((1U << 0)), "PIDFD_SIGNAL_THREAD != (1U << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PIDFD_SIGNAL_THREAD (1U << 0)
#endif
#if defined(PIDFD_SIGNAL_THREAD_GROUP) || (defined(HAVE_DECL_PIDFD_SIGNAL_THREAD_GROUP) && HAVE_DECL_PIDFD_SIGNAL_THREAD_GROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PIDFD_SIGNAL_THREAD_GROUP) == ((1U << 1)), "PIDFD_SIGNAL_THREAD_GROUP != (1U << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PIDFD_SIGNAL_THREAD_GROUP (1U << 1)
#endif
#if defined(PIDFD_SIGNAL_PROCESS_GROUP) || (defined(HAVE_DECL_PIDFD_SIGNAL_PROCESS_GROUP) && HAVE_DECL_PIDFD_SIGNAL_PROCESS_GROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PIDFD_SIGNAL_PROCESS_GROUP) == ((1U << 2)), "PIDFD_SIGNAL_PROCESS_GROUP != (1U << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PIDFD_SIGNAL_PROCESS_GROUP (1U << 2)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pidfd_send_signal_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data pidfd_send_signal_flags_xdata[] = {
 XLAT(PIDFD_SIGNAL_THREAD),
 #define XLAT_VAL_0 ((unsigned) (PIDFD_SIGNAL_THREAD))
 #define XLAT_STR_0 STRINGIFY(PIDFD_SIGNAL_THREAD)
 XLAT(PIDFD_SIGNAL_THREAD_GROUP),
 #define XLAT_VAL_1 ((unsigned) (PIDFD_SIGNAL_THREAD_GROUP))
 #define XLAT_STR_1 STRINGIFY(PIDFD_SIGNAL_THREAD_GROUP)
 XLAT(PIDFD_SIGNAL_PROCESS_GROUP),
 #define XLAT_VAL_2 ((unsigned) (PIDFD_SIGNAL_PROCESS_GROUP))
 #define XLAT_STR_2 STRINGIFY(PIDFD_SIGNAL_PROCESS_GROUP)
};
static
const struct xlat pidfd_send_signal_flags[1] = { {
 .data = pidfd_send_signal_flags_xdata,
 .size = ARRAY_SIZE(pidfd_send_signal_flags_xdata),
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
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
