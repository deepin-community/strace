/* Generated by ./src/xlat/gen.sh from ./src/xlat/watchdog_ioctl_setoptions.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(WDIOS_DISABLECARD) || (defined(HAVE_DECL_WDIOS_DISABLECARD) && HAVE_DECL_WDIOS_DISABLECARD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOS_DISABLECARD) == (0x0001), "WDIOS_DISABLECARD != 0x0001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOS_DISABLECARD 0x0001
#endif
#if defined(WDIOS_ENABLECARD) || (defined(HAVE_DECL_WDIOS_ENABLECARD) && HAVE_DECL_WDIOS_ENABLECARD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOS_ENABLECARD) == (0x0002), "WDIOS_ENABLECARD != 0x0002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOS_ENABLECARD 0x0002
#endif
#if defined(WDIOS_TEMPPANIC) || (defined(HAVE_DECL_WDIOS_TEMPPANIC) && HAVE_DECL_WDIOS_TEMPPANIC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOS_TEMPPANIC) == (0x0004), "WDIOS_TEMPPANIC != 0x0004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOS_TEMPPANIC 0x0004
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat watchdog_ioctl_setoptions in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data watchdog_ioctl_setoptions_xdata[] = {
 XLAT(WDIOS_DISABLECARD),
 #define XLAT_VAL_0 ((unsigned) (WDIOS_DISABLECARD))
 #define XLAT_STR_0 STRINGIFY(WDIOS_DISABLECARD)
 XLAT(WDIOS_ENABLECARD),
 #define XLAT_VAL_1 ((unsigned) (WDIOS_ENABLECARD))
 #define XLAT_STR_1 STRINGIFY(WDIOS_ENABLECARD)
 XLAT(WDIOS_TEMPPANIC),
 #define XLAT_VAL_2 ((unsigned) (WDIOS_TEMPPANIC))
 #define XLAT_STR_2 STRINGIFY(WDIOS_TEMPPANIC)
};
static
const struct xlat watchdog_ioctl_setoptions[1] = { {
 .data = watchdog_ioctl_setoptions_xdata,
 .size = ARRAY_SIZE(watchdog_ioctl_setoptions_xdata),
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
