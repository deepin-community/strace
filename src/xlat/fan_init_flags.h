/* Generated by ./src/xlat/gen.sh from ./src/xlat/fan_init_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FAN_CLOEXEC) || (defined(HAVE_DECL_FAN_CLOEXEC) && HAVE_DECL_FAN_CLOEXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLOEXEC) == (0x00000001), "FAN_CLOEXEC != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLOEXEC 0x00000001
#endif
#if defined(FAN_NONBLOCK) || (defined(HAVE_DECL_FAN_NONBLOCK) && HAVE_DECL_FAN_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_NONBLOCK) == (0x00000002), "FAN_NONBLOCK != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_NONBLOCK 0x00000002
#endif
#if defined(FAN_UNLIMITED_QUEUE) || (defined(HAVE_DECL_FAN_UNLIMITED_QUEUE) && HAVE_DECL_FAN_UNLIMITED_QUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_UNLIMITED_QUEUE) == (0x00000010), "FAN_UNLIMITED_QUEUE != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_UNLIMITED_QUEUE 0x00000010
#endif
#if defined(FAN_UNLIMITED_MARKS) || (defined(HAVE_DECL_FAN_UNLIMITED_MARKS) && HAVE_DECL_FAN_UNLIMITED_MARKS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_UNLIMITED_MARKS) == (0x00000020), "FAN_UNLIMITED_MARKS != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_UNLIMITED_MARKS 0x00000020
#endif
#if defined(FAN_ENABLE_AUDIT) || (defined(HAVE_DECL_FAN_ENABLE_AUDIT) && HAVE_DECL_FAN_ENABLE_AUDIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ENABLE_AUDIT) == (0x00000040), "FAN_ENABLE_AUDIT != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ENABLE_AUDIT 0x00000040
#endif
#if defined(FAN_REPORT_PIDFD) || (defined(HAVE_DECL_FAN_REPORT_PIDFD) && HAVE_DECL_FAN_REPORT_PIDFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_REPORT_PIDFD) == (0x00000080), "FAN_REPORT_PIDFD != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_REPORT_PIDFD 0x00000080
#endif
#if defined(FAN_REPORT_TID) || (defined(HAVE_DECL_FAN_REPORT_TID) && HAVE_DECL_FAN_REPORT_TID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_REPORT_TID) == (0x00000100), "FAN_REPORT_TID != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_REPORT_TID 0x00000100
#endif
#if defined(FAN_REPORT_FID) || (defined(HAVE_DECL_FAN_REPORT_FID) && HAVE_DECL_FAN_REPORT_FID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_REPORT_FID) == (0x00000200), "FAN_REPORT_FID != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_REPORT_FID 0x00000200
#endif
#if defined(FAN_REPORT_DIR_FID) || (defined(HAVE_DECL_FAN_REPORT_DIR_FID) && HAVE_DECL_FAN_REPORT_DIR_FID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_REPORT_DIR_FID) == (0x00000400), "FAN_REPORT_DIR_FID != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_REPORT_DIR_FID 0x00000400
#endif
#if defined(FAN_REPORT_NAME) || (defined(HAVE_DECL_FAN_REPORT_NAME) && HAVE_DECL_FAN_REPORT_NAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_REPORT_NAME) == (0x00000800), "FAN_REPORT_NAME != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_REPORT_NAME 0x00000800
#endif
#if defined(FAN_REPORT_TARGET_FID) || (defined(HAVE_DECL_FAN_REPORT_TARGET_FID) && HAVE_DECL_FAN_REPORT_TARGET_FID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_REPORT_TARGET_FID) == (0x00001000), "FAN_REPORT_TARGET_FID != 0x00001000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_REPORT_TARGET_FID 0x00001000
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fan_init_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data fan_init_flags_xdata[] = {
 XLAT(FAN_CLOEXEC),
 #define XLAT_VAL_0 ((unsigned) (FAN_CLOEXEC))
 #define XLAT_STR_0 STRINGIFY(FAN_CLOEXEC)
 XLAT(FAN_NONBLOCK),
 #define XLAT_VAL_1 ((unsigned) (FAN_NONBLOCK))
 #define XLAT_STR_1 STRINGIFY(FAN_NONBLOCK)
 XLAT(FAN_UNLIMITED_QUEUE),
 #define XLAT_VAL_2 ((unsigned) (FAN_UNLIMITED_QUEUE))
 #define XLAT_STR_2 STRINGIFY(FAN_UNLIMITED_QUEUE)
 XLAT(FAN_UNLIMITED_MARKS),
 #define XLAT_VAL_3 ((unsigned) (FAN_UNLIMITED_MARKS))
 #define XLAT_STR_3 STRINGIFY(FAN_UNLIMITED_MARKS)
 XLAT(FAN_ENABLE_AUDIT),
 #define XLAT_VAL_4 ((unsigned) (FAN_ENABLE_AUDIT))
 #define XLAT_STR_4 STRINGIFY(FAN_ENABLE_AUDIT)
 XLAT(FAN_REPORT_PIDFD),
 #define XLAT_VAL_5 ((unsigned) (FAN_REPORT_PIDFD))
 #define XLAT_STR_5 STRINGIFY(FAN_REPORT_PIDFD)
 XLAT(FAN_REPORT_TID),
 #define XLAT_VAL_6 ((unsigned) (FAN_REPORT_TID))
 #define XLAT_STR_6 STRINGIFY(FAN_REPORT_TID)
 XLAT(FAN_REPORT_FID),
 #define XLAT_VAL_7 ((unsigned) (FAN_REPORT_FID))
 #define XLAT_STR_7 STRINGIFY(FAN_REPORT_FID)
 XLAT(FAN_REPORT_DIR_FID),
 #define XLAT_VAL_8 ((unsigned) (FAN_REPORT_DIR_FID))
 #define XLAT_STR_8 STRINGIFY(FAN_REPORT_DIR_FID)
 XLAT(FAN_REPORT_NAME),
 #define XLAT_VAL_9 ((unsigned) (FAN_REPORT_NAME))
 #define XLAT_STR_9 STRINGIFY(FAN_REPORT_NAME)
 XLAT(FAN_REPORT_TARGET_FID),
 #define XLAT_VAL_10 ((unsigned) (FAN_REPORT_TARGET_FID))
 #define XLAT_STR_10 STRINGIFY(FAN_REPORT_TARGET_FID)
};
static
const struct xlat fan_init_flags[1] = { {
 .data = fan_init_flags_xdata,
 .size = ARRAY_SIZE(fan_init_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
