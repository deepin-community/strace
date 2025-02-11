/* Generated by ./src/xlat/gen.sh from ./src/xlat/watchdog_ioctl_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(WDIOF_OVERHEAT) || (defined(HAVE_DECL_WDIOF_OVERHEAT) && HAVE_DECL_WDIOF_OVERHEAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_OVERHEAT) == (0x0001), "WDIOF_OVERHEAT != 0x0001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_OVERHEAT 0x0001
#endif
#if defined(WDIOF_FANFAULT) || (defined(HAVE_DECL_WDIOF_FANFAULT) && HAVE_DECL_WDIOF_FANFAULT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_FANFAULT) == (0x0002), "WDIOF_FANFAULT != 0x0002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_FANFAULT 0x0002
#endif
#if defined(WDIOF_EXTERN1) || (defined(HAVE_DECL_WDIOF_EXTERN1) && HAVE_DECL_WDIOF_EXTERN1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_EXTERN1) == (0x0004), "WDIOF_EXTERN1 != 0x0004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_EXTERN1 0x0004
#endif
#if defined(WDIOF_EXTERN2) || (defined(HAVE_DECL_WDIOF_EXTERN2) && HAVE_DECL_WDIOF_EXTERN2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_EXTERN2) == (0x0008), "WDIOF_EXTERN2 != 0x0008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_EXTERN2 0x0008
#endif
#if defined(WDIOF_POWERUNDER) || (defined(HAVE_DECL_WDIOF_POWERUNDER) && HAVE_DECL_WDIOF_POWERUNDER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_POWERUNDER) == (0x0010), "WDIOF_POWERUNDER != 0x0010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_POWERUNDER 0x0010
#endif
#if defined(WDIOF_CARDRESET) || (defined(HAVE_DECL_WDIOF_CARDRESET) && HAVE_DECL_WDIOF_CARDRESET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_CARDRESET) == (0x0020), "WDIOF_CARDRESET != 0x0020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_CARDRESET 0x0020
#endif
#if defined(WDIOF_POWEROVER) || (defined(HAVE_DECL_WDIOF_POWEROVER) && HAVE_DECL_WDIOF_POWEROVER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_POWEROVER) == (0x0040), "WDIOF_POWEROVER != 0x0040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_POWEROVER 0x0040
#endif
#if defined(WDIOF_SETTIMEOUT) || (defined(HAVE_DECL_WDIOF_SETTIMEOUT) && HAVE_DECL_WDIOF_SETTIMEOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_SETTIMEOUT) == (0x0080), "WDIOF_SETTIMEOUT != 0x0080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_SETTIMEOUT 0x0080
#endif
#if defined(WDIOF_MAGICCLOSE) || (defined(HAVE_DECL_WDIOF_MAGICCLOSE) && HAVE_DECL_WDIOF_MAGICCLOSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_MAGICCLOSE) == (0x0100), "WDIOF_MAGICCLOSE != 0x0100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_MAGICCLOSE 0x0100
#endif
#if defined(WDIOF_PRETIMEOUT) || (defined(HAVE_DECL_WDIOF_PRETIMEOUT) && HAVE_DECL_WDIOF_PRETIMEOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_PRETIMEOUT) == (0x0200), "WDIOF_PRETIMEOUT != 0x0200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_PRETIMEOUT 0x0200
#endif
#if defined(WDIOF_ALARMONLY) || (defined(HAVE_DECL_WDIOF_ALARMONLY) && HAVE_DECL_WDIOF_ALARMONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_ALARMONLY) == (0x0400), "WDIOF_ALARMONLY != 0x0400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_ALARMONLY 0x0400
#endif
#if defined(WDIOF_KEEPALIVEPING) || (defined(HAVE_DECL_WDIOF_KEEPALIVEPING) && HAVE_DECL_WDIOF_KEEPALIVEPING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((WDIOF_KEEPALIVEPING) == (0x8000), "WDIOF_KEEPALIVEPING != 0x8000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define WDIOF_KEEPALIVEPING 0x8000
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat watchdog_ioctl_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data watchdog_ioctl_flags_xdata[] = {
 XLAT(WDIOF_OVERHEAT),
 #define XLAT_VAL_0 ((unsigned) (WDIOF_OVERHEAT))
 #define XLAT_STR_0 STRINGIFY(WDIOF_OVERHEAT)
 XLAT(WDIOF_FANFAULT),
 #define XLAT_VAL_1 ((unsigned) (WDIOF_FANFAULT))
 #define XLAT_STR_1 STRINGIFY(WDIOF_FANFAULT)
 XLAT(WDIOF_EXTERN1),
 #define XLAT_VAL_2 ((unsigned) (WDIOF_EXTERN1))
 #define XLAT_STR_2 STRINGIFY(WDIOF_EXTERN1)
 XLAT(WDIOF_EXTERN2),
 #define XLAT_VAL_3 ((unsigned) (WDIOF_EXTERN2))
 #define XLAT_STR_3 STRINGIFY(WDIOF_EXTERN2)
 XLAT(WDIOF_POWERUNDER),
 #define XLAT_VAL_4 ((unsigned) (WDIOF_POWERUNDER))
 #define XLAT_STR_4 STRINGIFY(WDIOF_POWERUNDER)
 XLAT(WDIOF_CARDRESET),
 #define XLAT_VAL_5 ((unsigned) (WDIOF_CARDRESET))
 #define XLAT_STR_5 STRINGIFY(WDIOF_CARDRESET)
 XLAT(WDIOF_POWEROVER),
 #define XLAT_VAL_6 ((unsigned) (WDIOF_POWEROVER))
 #define XLAT_STR_6 STRINGIFY(WDIOF_POWEROVER)
 XLAT(WDIOF_SETTIMEOUT),
 #define XLAT_VAL_7 ((unsigned) (WDIOF_SETTIMEOUT))
 #define XLAT_STR_7 STRINGIFY(WDIOF_SETTIMEOUT)
 XLAT(WDIOF_MAGICCLOSE),
 #define XLAT_VAL_8 ((unsigned) (WDIOF_MAGICCLOSE))
 #define XLAT_STR_8 STRINGIFY(WDIOF_MAGICCLOSE)
 XLAT(WDIOF_PRETIMEOUT),
 #define XLAT_VAL_9 ((unsigned) (WDIOF_PRETIMEOUT))
 #define XLAT_STR_9 STRINGIFY(WDIOF_PRETIMEOUT)
 XLAT(WDIOF_ALARMONLY),
 #define XLAT_VAL_10 ((unsigned) (WDIOF_ALARMONLY))
 #define XLAT_STR_10 STRINGIFY(WDIOF_ALARMONLY)
 XLAT(WDIOF_KEEPALIVEPING),
 #define XLAT_VAL_11 ((unsigned) (WDIOF_KEEPALIVEPING))
 #define XLAT_STR_11 STRINGIFY(WDIOF_KEEPALIVEPING)
};
static
const struct xlat watchdog_ioctl_flags[1] = { {
 .data = watchdog_ioctl_flags_xdata,
 .size = ARRAY_SIZE(watchdog_ioctl_flags_xdata),
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
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
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
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
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
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
