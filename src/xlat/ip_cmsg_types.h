/* Generated by ./src/xlat/gen.sh from ./src/xlat/ip_cmsg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IP_TOS) || (defined(HAVE_DECL_IP_TOS) && HAVE_DECL_IP_TOS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_TOS) == (1), "IP_TOS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_TOS 1
#endif
#if defined(IP_TTL) || (defined(HAVE_DECL_IP_TTL) && HAVE_DECL_IP_TTL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_TTL) == (2), "IP_TTL != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_TTL 2
#endif
#if defined(IP_RECVOPTS) || (defined(HAVE_DECL_IP_RECVOPTS) && HAVE_DECL_IP_RECVOPTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_RECVOPTS) == (6), "IP_RECVOPTS != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_RECVOPTS 6
#endif
#if defined(IP_RETOPTS) || (defined(HAVE_DECL_IP_RETOPTS) && HAVE_DECL_IP_RETOPTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_RETOPTS) == (7), "IP_RETOPTS != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_RETOPTS 7
#endif
#if defined(IP_PKTINFO) || (defined(HAVE_DECL_IP_PKTINFO) && HAVE_DECL_IP_PKTINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_PKTINFO) == (8), "IP_PKTINFO != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_PKTINFO 8
#endif
#if defined(IP_RECVERR) || (defined(HAVE_DECL_IP_RECVERR) && HAVE_DECL_IP_RECVERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_RECVERR) == (11), "IP_RECVERR != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_RECVERR 11
#endif
#if defined(IP_ORIGDSTADDR) || (defined(HAVE_DECL_IP_ORIGDSTADDR) && HAVE_DECL_IP_ORIGDSTADDR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_ORIGDSTADDR) == (20), "IP_ORIGDSTADDR != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_ORIGDSTADDR 20
#endif
#if defined(IP_CHECKSUM) || (defined(HAVE_DECL_IP_CHECKSUM) && HAVE_DECL_IP_CHECKSUM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_CHECKSUM) == (23), "IP_CHECKSUM != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_CHECKSUM 23
#endif
#if defined(IP_PROTOCOL) || (defined(HAVE_DECL_IP_PROTOCOL) && HAVE_DECL_IP_PROTOCOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IP_PROTOCOL) == (52), "IP_PROTOCOL != 52");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IP_PROTOCOL 52
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ip_cmsg_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data ip_cmsg_types_xdata[] = {
 XLAT(IP_TOS),
 #define XLAT_VAL_0 ((unsigned) (IP_TOS))
 #define XLAT_STR_0 STRINGIFY(IP_TOS)
 XLAT(IP_TTL),
 #define XLAT_VAL_1 ((unsigned) (IP_TTL))
 #define XLAT_STR_1 STRINGIFY(IP_TTL)
 XLAT(IP_RECVOPTS),
 #define XLAT_VAL_2 ((unsigned) (IP_RECVOPTS))
 #define XLAT_STR_2 STRINGIFY(IP_RECVOPTS)
 XLAT(IP_RETOPTS),
 #define XLAT_VAL_3 ((unsigned) (IP_RETOPTS))
 #define XLAT_STR_3 STRINGIFY(IP_RETOPTS)
 XLAT(IP_PKTINFO),
 #define XLAT_VAL_4 ((unsigned) (IP_PKTINFO))
 #define XLAT_STR_4 STRINGIFY(IP_PKTINFO)
 XLAT(IP_RECVERR),
 #define XLAT_VAL_5 ((unsigned) (IP_RECVERR))
 #define XLAT_STR_5 STRINGIFY(IP_RECVERR)
 XLAT(IP_ORIGDSTADDR),
 #define XLAT_VAL_6 ((unsigned) (IP_ORIGDSTADDR))
 #define XLAT_STR_6 STRINGIFY(IP_ORIGDSTADDR)
 XLAT(IP_CHECKSUM),
 #define XLAT_VAL_7 ((unsigned) (IP_CHECKSUM))
 #define XLAT_STR_7 STRINGIFY(IP_CHECKSUM)
 XLAT(IP_PROTOCOL),
 #define XLAT_VAL_8 ((unsigned) (IP_PROTOCOL))
 #define XLAT_STR_8 STRINGIFY(IP_PROTOCOL)
#if defined(SCM_SECURITY) || (defined(HAVE_DECL_SCM_SECURITY) && HAVE_DECL_SCM_SECURITY)
  XLAT(SCM_SECURITY),
 #define XLAT_VAL_9 ((unsigned) (SCM_SECURITY))
 #define XLAT_STR_9 STRINGIFY(SCM_SECURITY)
#endif
};
static
const struct xlat ip_cmsg_types[1] = { {
 .data = ip_cmsg_types_xdata,
 .size = ARRAY_SIZE(ip_cmsg_types_xdata),
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
