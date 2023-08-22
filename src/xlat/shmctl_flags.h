/* Generated by ./src/xlat/gen.sh from ./src/xlat/shmctl_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IPC_RMID) || (defined(HAVE_DECL_IPC_RMID) && HAVE_DECL_IPC_RMID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_RMID) == (0), "IPC_RMID != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_RMID 0
#endif
#if defined(IPC_RMID) || (defined(HAVE_DECL_IPC_RMID) && HAVE_DECL_IPC_RMID)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPC_RMID)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPC_RMID"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPC_RMID)
#endif
#if defined(IPC_SET) || (defined(HAVE_DECL_IPC_SET) && HAVE_DECL_IPC_SET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_SET) == (1), "IPC_SET != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_SET 1
#endif
#if defined(IPC_SET) || (defined(HAVE_DECL_IPC_SET) && HAVE_DECL_IPC_SET)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPC_SET)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPC_SET"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPC_SET)
#endif
#if defined(IPC_STAT) || (defined(HAVE_DECL_IPC_STAT) && HAVE_DECL_IPC_STAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_STAT) == (2), "IPC_STAT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_STAT 2
#endif
#if defined(IPC_STAT) || (defined(HAVE_DECL_IPC_STAT) && HAVE_DECL_IPC_STAT)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPC_STAT)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPC_STAT"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPC_STAT)
#endif
#if defined(IPC_INFO) || (defined(HAVE_DECL_IPC_INFO) && HAVE_DECL_IPC_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_INFO) == (3), "IPC_INFO != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_INFO 3
#endif
#if defined(IPC_INFO) || (defined(HAVE_DECL_IPC_INFO) && HAVE_DECL_IPC_INFO)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPC_INFO)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPC_INFO"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPC_INFO)
#endif
#if defined(SHM_LOCK) || (defined(HAVE_DECL_SHM_LOCK) && HAVE_DECL_SHM_LOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_LOCK) == (11), "SHM_LOCK != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_LOCK 11
#endif
#if defined(SHM_LOCK) || (defined(HAVE_DECL_SHM_LOCK) && HAVE_DECL_SHM_LOCK)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (SHM_LOCK)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: SHM_LOCK"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (SHM_LOCK)
#endif
#if defined(SHM_UNLOCK) || (defined(HAVE_DECL_SHM_UNLOCK) && HAVE_DECL_SHM_UNLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_UNLOCK) == (12), "SHM_UNLOCK != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_UNLOCK 12
#endif
#if defined(SHM_UNLOCK) || (defined(HAVE_DECL_SHM_UNLOCK) && HAVE_DECL_SHM_UNLOCK)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (SHM_UNLOCK)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: SHM_UNLOCK"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (SHM_UNLOCK)
#endif
#if defined(SHM_STAT) || (defined(HAVE_DECL_SHM_STAT) && HAVE_DECL_SHM_STAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_STAT) == (13), "SHM_STAT != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_STAT 13
#endif
#if defined(SHM_STAT) || (defined(HAVE_DECL_SHM_STAT) && HAVE_DECL_SHM_STAT)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (SHM_STAT)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: SHM_STAT"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (SHM_STAT)
#endif
#if defined(SHM_INFO) || (defined(HAVE_DECL_SHM_INFO) && HAVE_DECL_SHM_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_INFO) == (14), "SHM_INFO != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_INFO 14
#endif
#if defined(SHM_INFO) || (defined(HAVE_DECL_SHM_INFO) && HAVE_DECL_SHM_INFO)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (SHM_INFO)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: SHM_INFO"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (SHM_INFO)
#endif
#if defined(SHM_STAT_ANY) || (defined(HAVE_DECL_SHM_STAT_ANY) && HAVE_DECL_SHM_STAT_ANY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHM_STAT_ANY) == (15), "SHM_STAT_ANY != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHM_STAT_ANY 15
#endif
#if defined(SHM_STAT_ANY) || (defined(HAVE_DECL_SHM_STAT_ANY) && HAVE_DECL_SHM_STAT_ANY)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (SHM_STAT_ANY)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: SHM_STAT_ANY"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (SHM_STAT_ANY)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat shmctl_flags[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data shmctl_flags_xdata[] = {
 XLAT(IPC_RMID),
 #define XLAT_VAL_0 ((unsigned) (IPC_RMID))
 #define XLAT_STR_0 STRINGIFY(IPC_RMID)
 XLAT(IPC_SET),
 #define XLAT_VAL_1 ((unsigned) (IPC_SET))
 #define XLAT_STR_1 STRINGIFY(IPC_SET)
 XLAT(IPC_STAT),
 #define XLAT_VAL_2 ((unsigned) (IPC_STAT))
 #define XLAT_STR_2 STRINGIFY(IPC_STAT)
 XLAT(IPC_INFO),
 #define XLAT_VAL_3 ((unsigned) (IPC_INFO))
 #define XLAT_STR_3 STRINGIFY(IPC_INFO)
 XLAT(SHM_LOCK),
 #define XLAT_VAL_4 ((unsigned) (SHM_LOCK))
 #define XLAT_STR_4 STRINGIFY(SHM_LOCK)
 XLAT(SHM_UNLOCK),
 #define XLAT_VAL_5 ((unsigned) (SHM_UNLOCK))
 #define XLAT_STR_5 STRINGIFY(SHM_UNLOCK)
 XLAT(SHM_STAT),
 #define XLAT_VAL_6 ((unsigned) (SHM_STAT))
 #define XLAT_STR_6 STRINGIFY(SHM_STAT)
 XLAT(SHM_INFO),
 #define XLAT_VAL_7 ((unsigned) (SHM_INFO))
 #define XLAT_STR_7 STRINGIFY(SHM_INFO)
 XLAT(SHM_STAT_ANY),
 #define XLAT_VAL_8 ((unsigned) (SHM_STAT_ANY))
 #define XLAT_STR_8 STRINGIFY(SHM_STAT_ANY)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat shmctl_flags[1] = { {
 .data = shmctl_flags_xdata,
 .size = ARRAY_SIZE(shmctl_flags_xdata),
 .type = XT_SORTED,
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
