/* Generated by ./src/xlat/gen.sh from ./src/xlat/scmvals.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SCM_RIGHTS) || (defined(HAVE_DECL_SCM_RIGHTS) && HAVE_DECL_SCM_RIGHTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_RIGHTS) == (1), "SCM_RIGHTS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_RIGHTS 1
#endif
#if defined(SCM_CREDENTIALS) || (defined(HAVE_DECL_SCM_CREDENTIALS) && HAVE_DECL_SCM_CREDENTIALS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_CREDENTIALS) == (2), "SCM_CREDENTIALS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_CREDENTIALS 2
#endif
#if defined(SCM_SECURITY) || (defined(HAVE_DECL_SCM_SECURITY) && HAVE_DECL_SCM_SECURITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_SECURITY) == (3), "SCM_SECURITY != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_SECURITY 3
#endif
#if defined(SCM_PIDFD) || (defined(HAVE_DECL_SCM_PIDFD) && HAVE_DECL_SCM_PIDFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_PIDFD) == (4), "SCM_PIDFD != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_PIDFD 4
#endif
#if defined __sparc__
#if defined(SCM_TIMESTAMPING_OPT_STATS) || (defined(HAVE_DECL_SCM_TIMESTAMPING_OPT_STATS) && HAVE_DECL_SCM_TIMESTAMPING_OPT_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_TIMESTAMPING_OPT_STATS) == (0x38), "SCM_TIMESTAMPING_OPT_STATS != 0x38");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_TIMESTAMPING_OPT_STATS 0x38
#endif
#elif defined __hppa__
#if defined(SCM_TIMESTAMPING_OPT_STATS) || (defined(HAVE_DECL_SCM_TIMESTAMPING_OPT_STATS) && HAVE_DECL_SCM_TIMESTAMPING_OPT_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_TIMESTAMPING_OPT_STATS) == (0x402f), "SCM_TIMESTAMPING_OPT_STATS != 0x402f");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_TIMESTAMPING_OPT_STATS 0x402f
#endif
#else
#if defined(SCM_TIMESTAMPING_OPT_STATS) || (defined(HAVE_DECL_SCM_TIMESTAMPING_OPT_STATS) && HAVE_DECL_SCM_TIMESTAMPING_OPT_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_TIMESTAMPING_OPT_STATS) == (0x36), "SCM_TIMESTAMPING_OPT_STATS != 0x36");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_TIMESTAMPING_OPT_STATS 0x36
#endif
#endif
#if defined __sparc__
#if defined(SCM_TIMESTAMPING_PKTINFO) || (defined(HAVE_DECL_SCM_TIMESTAMPING_PKTINFO) && HAVE_DECL_SCM_TIMESTAMPING_PKTINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_TIMESTAMPING_PKTINFO) == (0x3c), "SCM_TIMESTAMPING_PKTINFO != 0x3c");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_TIMESTAMPING_PKTINFO 0x3c
#endif
#elif defined __hppa__
#if defined(SCM_TIMESTAMPING_PKTINFO) || (defined(HAVE_DECL_SCM_TIMESTAMPING_PKTINFO) && HAVE_DECL_SCM_TIMESTAMPING_PKTINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_TIMESTAMPING_PKTINFO) == (0x4033), "SCM_TIMESTAMPING_PKTINFO != 0x4033");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_TIMESTAMPING_PKTINFO 0x4033
#endif
#else
#if defined(SCM_TIMESTAMPING_PKTINFO) || (defined(HAVE_DECL_SCM_TIMESTAMPING_PKTINFO) && HAVE_DECL_SCM_TIMESTAMPING_PKTINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_TIMESTAMPING_PKTINFO) == (0x3a), "SCM_TIMESTAMPING_PKTINFO != 0x3a");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_TIMESTAMPING_PKTINFO 0x3a
#endif
#endif
#if defined __sparc__
#if defined(SCM_DEVMEM_LINEAR) || (defined(HAVE_DECL_SCM_DEVMEM_LINEAR) && HAVE_DECL_SCM_DEVMEM_LINEAR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_DEVMEM_LINEAR) == (0x57), "SCM_DEVMEM_LINEAR != 0x57");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_DEVMEM_LINEAR 0x57
#endif
#if defined(SCM_DEVMEM_DMABUF) || (defined(HAVE_DECL_SCM_DEVMEM_DMABUF) && HAVE_DECL_SCM_DEVMEM_DMABUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_DEVMEM_DMABUF) == (0x58), "SCM_DEVMEM_DMABUF != 0x58");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_DEVMEM_DMABUF 0x58
#endif
#if defined(SO_DEVMEM_DONTNEED) || (defined(HAVE_DECL_SO_DEVMEM_DONTNEED) && HAVE_DECL_SO_DEVMEM_DONTNEED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SO_DEVMEM_DONTNEED) == (0x59), "SO_DEVMEM_DONTNEED != 0x59");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SO_DEVMEM_DONTNEED 0x59
#endif
#else
#if defined(SCM_DEVMEM_LINEAR) || (defined(HAVE_DECL_SCM_DEVMEM_LINEAR) && HAVE_DECL_SCM_DEVMEM_LINEAR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_DEVMEM_LINEAR) == (0x4e), "SCM_DEVMEM_LINEAR != 0x4e");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_DEVMEM_LINEAR 0x4e
#endif
#if defined(SCM_DEVMEM_DMABUF) || (defined(HAVE_DECL_SCM_DEVMEM_DMABUF) && HAVE_DECL_SCM_DEVMEM_DMABUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SCM_DEVMEM_DMABUF) == (0x4f), "SCM_DEVMEM_DMABUF != 0x4f");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SCM_DEVMEM_DMABUF 0x4f
#endif
#if defined(SO_DEVMEM_DONTNEED) || (defined(HAVE_DECL_SO_DEVMEM_DONTNEED) && HAVE_DECL_SO_DEVMEM_DONTNEED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SO_DEVMEM_DONTNEED) == (0x50), "SO_DEVMEM_DONTNEED != 0x50");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SO_DEVMEM_DONTNEED 0x50
#endif
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat scmvals in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data scmvals_xdata[] = {
 XLAT(SCM_RIGHTS),
 #define XLAT_VAL_0 ((unsigned) (SCM_RIGHTS))
 #define XLAT_STR_0 STRINGIFY(SCM_RIGHTS)
 XLAT(SCM_CREDENTIALS),
 #define XLAT_VAL_1 ((unsigned) (SCM_CREDENTIALS))
 #define XLAT_STR_1 STRINGIFY(SCM_CREDENTIALS)
 XLAT(SCM_SECURITY),
 #define XLAT_VAL_2 ((unsigned) (SCM_SECURITY))
 #define XLAT_STR_2 STRINGIFY(SCM_SECURITY)
 XLAT(SCM_PIDFD),
 #define XLAT_VAL_3 ((unsigned) (SCM_PIDFD))
 #define XLAT_STR_3 STRINGIFY(SCM_PIDFD)

#if defined(SO_WIFI_STATUS) || (defined(HAVE_DECL_SO_WIFI_STATUS) && HAVE_DECL_SO_WIFI_STATUS)
  XLAT(SO_WIFI_STATUS),
 #define XLAT_VAL_4 ((unsigned) (SO_WIFI_STATUS))
 #define XLAT_STR_4 STRINGIFY(SO_WIFI_STATUS)
#endif
#if defined(SO_TXTIME) || (defined(HAVE_DECL_SO_TXTIME) && HAVE_DECL_SO_TXTIME)
  XLAT(SO_TXTIME),
 #define XLAT_VAL_5 ((unsigned) (SO_TXTIME))
 #define XLAT_STR_5 STRINGIFY(SO_TXTIME)
#endif
#if defined(SO_TIMESTAMP_OLD) || (defined(HAVE_DECL_SO_TIMESTAMP_OLD) && HAVE_DECL_SO_TIMESTAMP_OLD)
  XLAT(SO_TIMESTAMP_OLD),
 #define XLAT_VAL_6 ((unsigned) (SO_TIMESTAMP_OLD))
 #define XLAT_STR_6 STRINGIFY(SO_TIMESTAMP_OLD)
#endif
#if defined(SO_TIMESTAMPNS_OLD) || (defined(HAVE_DECL_SO_TIMESTAMPNS_OLD) && HAVE_DECL_SO_TIMESTAMPNS_OLD)
  XLAT(SO_TIMESTAMPNS_OLD),
 #define XLAT_VAL_7 ((unsigned) (SO_TIMESTAMPNS_OLD))
 #define XLAT_STR_7 STRINGIFY(SO_TIMESTAMPNS_OLD)
#endif
#if defined(SO_TIMESTAMPING_OLD) || (defined(HAVE_DECL_SO_TIMESTAMPING_OLD) && HAVE_DECL_SO_TIMESTAMPING_OLD)
  XLAT(SO_TIMESTAMPING_OLD),
 #define XLAT_VAL_8 ((unsigned) (SO_TIMESTAMPING_OLD))
 #define XLAT_STR_8 STRINGIFY(SO_TIMESTAMPING_OLD)
#endif
#if defined(SO_TIMESTAMP_NEW) || (defined(HAVE_DECL_SO_TIMESTAMP_NEW) && HAVE_DECL_SO_TIMESTAMP_NEW)
  XLAT(SO_TIMESTAMP_NEW),
 #define XLAT_VAL_9 ((unsigned) (SO_TIMESTAMP_NEW))
 #define XLAT_STR_9 STRINGIFY(SO_TIMESTAMP_NEW)
#endif
#if defined(SO_TIMESTAMPNS_NEW) || (defined(HAVE_DECL_SO_TIMESTAMPNS_NEW) && HAVE_DECL_SO_TIMESTAMPNS_NEW)
  XLAT(SO_TIMESTAMPNS_NEW),
 #define XLAT_VAL_10 ((unsigned) (SO_TIMESTAMPNS_NEW))
 #define XLAT_STR_10 STRINGIFY(SO_TIMESTAMPNS_NEW)
#endif
#if defined(SO_TIMESTAMPING_NEW) || (defined(HAVE_DECL_SO_TIMESTAMPING_NEW) && HAVE_DECL_SO_TIMESTAMPING_NEW)
  XLAT(SO_TIMESTAMPING_NEW),
 #define XLAT_VAL_11 ((unsigned) (SO_TIMESTAMPING_NEW))
 #define XLAT_STR_11 STRINGIFY(SO_TIMESTAMPING_NEW)
#endif


#if defined __sparc__
 XLAT(SCM_TIMESTAMPING_OPT_STATS),
 #define XLAT_VAL_12 ((unsigned) (SCM_TIMESTAMPING_OPT_STATS))
 #define XLAT_STR_12 STRINGIFY(SCM_TIMESTAMPING_OPT_STATS)
#elif defined __hppa__
 XLAT(SCM_TIMESTAMPING_OPT_STATS),
 #define XLAT_VAL_13 ((unsigned) (SCM_TIMESTAMPING_OPT_STATS))
 #define XLAT_STR_13 STRINGIFY(SCM_TIMESTAMPING_OPT_STATS)
#else
 XLAT(SCM_TIMESTAMPING_OPT_STATS),
 #define XLAT_VAL_14 ((unsigned) (SCM_TIMESTAMPING_OPT_STATS))
 #define XLAT_STR_14 STRINGIFY(SCM_TIMESTAMPING_OPT_STATS)
#endif
#if defined __sparc__
 XLAT(SCM_TIMESTAMPING_PKTINFO),
 #define XLAT_VAL_15 ((unsigned) (SCM_TIMESTAMPING_PKTINFO))
 #define XLAT_STR_15 STRINGIFY(SCM_TIMESTAMPING_PKTINFO)
#elif defined __hppa__
 XLAT(SCM_TIMESTAMPING_PKTINFO),
 #define XLAT_VAL_16 ((unsigned) (SCM_TIMESTAMPING_PKTINFO))
 #define XLAT_STR_16 STRINGIFY(SCM_TIMESTAMPING_PKTINFO)
#else
 XLAT(SCM_TIMESTAMPING_PKTINFO),
 #define XLAT_VAL_17 ((unsigned) (SCM_TIMESTAMPING_PKTINFO))
 #define XLAT_STR_17 STRINGIFY(SCM_TIMESTAMPING_PKTINFO)
#endif

#if defined __sparc__
 XLAT(SCM_DEVMEM_LINEAR),
 #define XLAT_VAL_18 ((unsigned) (SCM_DEVMEM_LINEAR))
 #define XLAT_STR_18 STRINGIFY(SCM_DEVMEM_LINEAR)
 XLAT(SCM_DEVMEM_DMABUF),
 #define XLAT_VAL_19 ((unsigned) (SCM_DEVMEM_DMABUF))
 #define XLAT_STR_19 STRINGIFY(SCM_DEVMEM_DMABUF)
 XLAT(SO_DEVMEM_DONTNEED),
 #define XLAT_VAL_20 ((unsigned) (SO_DEVMEM_DONTNEED))
 #define XLAT_STR_20 STRINGIFY(SO_DEVMEM_DONTNEED)
#else
 XLAT(SCM_DEVMEM_LINEAR),
 #define XLAT_VAL_21 ((unsigned) (SCM_DEVMEM_LINEAR))
 #define XLAT_STR_21 STRINGIFY(SCM_DEVMEM_LINEAR)
 XLAT(SCM_DEVMEM_DMABUF),
 #define XLAT_VAL_22 ((unsigned) (SCM_DEVMEM_DMABUF))
 #define XLAT_STR_22 STRINGIFY(SCM_DEVMEM_DMABUF)
 XLAT(SO_DEVMEM_DONTNEED),
 #define XLAT_VAL_23 ((unsigned) (SO_DEVMEM_DONTNEED))
 #define XLAT_STR_23 STRINGIFY(SO_DEVMEM_DONTNEED)
#endif
};
static
const struct xlat scmvals[1] = { {
 .data = scmvals_xdata,
 .size = ARRAY_SIZE(scmvals_xdata),
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
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
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
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
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
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
