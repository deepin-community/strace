/* Generated by ./src/xlat/gen.sh from ./src/xlat/inet_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IPPROTO_IP) || (defined(HAVE_DECL_IPPROTO_IP) && HAVE_DECL_IPPROTO_IP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_IP) == (0), "IPPROTO_IP != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_IP 0
#endif
#if defined(IPPROTO_IP) || (defined(HAVE_DECL_IPPROTO_IP) && HAVE_DECL_IPPROTO_IP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_IP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_IP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_IP)
#endif
#if defined(IPPROTO_ICMP) || (defined(HAVE_DECL_IPPROTO_ICMP) && HAVE_DECL_IPPROTO_ICMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_ICMP) == (1), "IPPROTO_ICMP != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_ICMP 1
#endif
#if defined(IPPROTO_ICMP) || (defined(HAVE_DECL_IPPROTO_ICMP) && HAVE_DECL_IPPROTO_ICMP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_ICMP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_ICMP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_ICMP)
#endif
#if defined(IPPROTO_IGMP) || (defined(HAVE_DECL_IPPROTO_IGMP) && HAVE_DECL_IPPROTO_IGMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_IGMP) == (2), "IPPROTO_IGMP != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_IGMP 2
#endif
#if defined(IPPROTO_IGMP) || (defined(HAVE_DECL_IPPROTO_IGMP) && HAVE_DECL_IPPROTO_IGMP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_IGMP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_IGMP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_IGMP)
#endif
#if defined(IPPROTO_IPIP) || (defined(HAVE_DECL_IPPROTO_IPIP) && HAVE_DECL_IPPROTO_IPIP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_IPIP) == (4), "IPPROTO_IPIP != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_IPIP 4
#endif
#if defined(IPPROTO_IPIP) || (defined(HAVE_DECL_IPPROTO_IPIP) && HAVE_DECL_IPPROTO_IPIP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_IPIP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_IPIP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_IPIP)
#endif
#if defined(IPPROTO_TCP) || (defined(HAVE_DECL_IPPROTO_TCP) && HAVE_DECL_IPPROTO_TCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_TCP) == (6), "IPPROTO_TCP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_TCP 6
#endif
#if defined(IPPROTO_TCP) || (defined(HAVE_DECL_IPPROTO_TCP) && HAVE_DECL_IPPROTO_TCP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_TCP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_TCP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_TCP)
#endif
#if defined(IPPROTO_EGP) || (defined(HAVE_DECL_IPPROTO_EGP) && HAVE_DECL_IPPROTO_EGP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_EGP) == (8), "IPPROTO_EGP != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_EGP 8
#endif
#if defined(IPPROTO_EGP) || (defined(HAVE_DECL_IPPROTO_EGP) && HAVE_DECL_IPPROTO_EGP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_EGP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_EGP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_EGP)
#endif
#if defined(IPPROTO_PUP) || (defined(HAVE_DECL_IPPROTO_PUP) && HAVE_DECL_IPPROTO_PUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_PUP) == (12), "IPPROTO_PUP != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_PUP 12
#endif
#if defined(IPPROTO_PUP) || (defined(HAVE_DECL_IPPROTO_PUP) && HAVE_DECL_IPPROTO_PUP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_PUP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_PUP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_PUP)
#endif
#if defined(IPPROTO_UDP) || (defined(HAVE_DECL_IPPROTO_UDP) && HAVE_DECL_IPPROTO_UDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_UDP) == (17), "IPPROTO_UDP != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_UDP 17
#endif
#if defined(IPPROTO_UDP) || (defined(HAVE_DECL_IPPROTO_UDP) && HAVE_DECL_IPPROTO_UDP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_UDP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_UDP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_UDP)
#endif
#if defined(IPPROTO_IDP) || (defined(HAVE_DECL_IPPROTO_IDP) && HAVE_DECL_IPPROTO_IDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_IDP) == (22), "IPPROTO_IDP != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_IDP 22
#endif
#if defined(IPPROTO_IDP) || (defined(HAVE_DECL_IPPROTO_IDP) && HAVE_DECL_IPPROTO_IDP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_IDP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_IDP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_IDP)
#endif
#if defined(IPPROTO_TP) || (defined(HAVE_DECL_IPPROTO_TP) && HAVE_DECL_IPPROTO_TP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_TP) == (29), "IPPROTO_TP != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_TP 29
#endif
#if defined(IPPROTO_TP) || (defined(HAVE_DECL_IPPROTO_TP) && HAVE_DECL_IPPROTO_TP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_TP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_TP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_TP)
#endif
#if defined(IPPROTO_DCCP) || (defined(HAVE_DECL_IPPROTO_DCCP) && HAVE_DECL_IPPROTO_DCCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_DCCP) == (33), "IPPROTO_DCCP != 33");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_DCCP 33
#endif
#if defined(IPPROTO_DCCP) || (defined(HAVE_DECL_IPPROTO_DCCP) && HAVE_DECL_IPPROTO_DCCP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_DCCP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_DCCP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_DCCP)
#endif
#if defined(IPPROTO_IPV6) || (defined(HAVE_DECL_IPPROTO_IPV6) && HAVE_DECL_IPPROTO_IPV6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_IPV6) == (41), "IPPROTO_IPV6 != 41");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_IPV6 41
#endif
#if defined(IPPROTO_IPV6) || (defined(HAVE_DECL_IPPROTO_IPV6) && HAVE_DECL_IPPROTO_IPV6)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_IPV6)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_IPV6"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_IPV6)
#endif
#if defined(IPPROTO_ROUTING) || (defined(HAVE_DECL_IPPROTO_ROUTING) && HAVE_DECL_IPPROTO_ROUTING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_ROUTING) == (43), "IPPROTO_ROUTING != 43");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_ROUTING 43
#endif
#if defined(IPPROTO_ROUTING) || (defined(HAVE_DECL_IPPROTO_ROUTING) && HAVE_DECL_IPPROTO_ROUTING)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_ROUTING)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_ROUTING"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_ROUTING)
#endif
#if defined(IPPROTO_FRAGMENT) || (defined(HAVE_DECL_IPPROTO_FRAGMENT) && HAVE_DECL_IPPROTO_FRAGMENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_FRAGMENT) == (44), "IPPROTO_FRAGMENT != 44");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_FRAGMENT 44
#endif
#if defined(IPPROTO_FRAGMENT) || (defined(HAVE_DECL_IPPROTO_FRAGMENT) && HAVE_DECL_IPPROTO_FRAGMENT)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_FRAGMENT)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_FRAGMENT"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_FRAGMENT)
#endif
#if defined(IPPROTO_RSVP) || (defined(HAVE_DECL_IPPROTO_RSVP) && HAVE_DECL_IPPROTO_RSVP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_RSVP) == (46), "IPPROTO_RSVP != 46");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_RSVP 46
#endif
#if defined(IPPROTO_RSVP) || (defined(HAVE_DECL_IPPROTO_RSVP) && HAVE_DECL_IPPROTO_RSVP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_RSVP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_RSVP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_RSVP)
#endif
#if defined(IPPROTO_GRE) || (defined(HAVE_DECL_IPPROTO_GRE) && HAVE_DECL_IPPROTO_GRE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_GRE) == (47), "IPPROTO_GRE != 47");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_GRE 47
#endif
#if defined(IPPROTO_GRE) || (defined(HAVE_DECL_IPPROTO_GRE) && HAVE_DECL_IPPROTO_GRE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_GRE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_GRE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_GRE)
#endif
#if defined(IPPROTO_ESP) || (defined(HAVE_DECL_IPPROTO_ESP) && HAVE_DECL_IPPROTO_ESP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_ESP) == (50), "IPPROTO_ESP != 50");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_ESP 50
#endif
#if defined(IPPROTO_ESP) || (defined(HAVE_DECL_IPPROTO_ESP) && HAVE_DECL_IPPROTO_ESP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_ESP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_ESP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_ESP)
#endif
#if defined(IPPROTO_AH) || (defined(HAVE_DECL_IPPROTO_AH) && HAVE_DECL_IPPROTO_AH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_AH) == (51), "IPPROTO_AH != 51");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_AH 51
#endif
#if defined(IPPROTO_AH) || (defined(HAVE_DECL_IPPROTO_AH) && HAVE_DECL_IPPROTO_AH)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_AH)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_AH"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_AH)
#endif
#if defined(IPPROTO_ICMPV6) || (defined(HAVE_DECL_IPPROTO_ICMPV6) && HAVE_DECL_IPPROTO_ICMPV6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_ICMPV6) == (58), "IPPROTO_ICMPV6 != 58");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_ICMPV6 58
#endif
#if defined(IPPROTO_ICMPV6) || (defined(HAVE_DECL_IPPROTO_ICMPV6) && HAVE_DECL_IPPROTO_ICMPV6)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_ICMPV6)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_ICMPV6"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_ICMPV6)
#endif
#if defined(IPPROTO_NONE) || (defined(HAVE_DECL_IPPROTO_NONE) && HAVE_DECL_IPPROTO_NONE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_NONE) == (59), "IPPROTO_NONE != 59");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_NONE 59
#endif
#if defined(IPPROTO_NONE) || (defined(HAVE_DECL_IPPROTO_NONE) && HAVE_DECL_IPPROTO_NONE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_NONE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_NONE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_NONE)
#endif
#if defined(IPPROTO_DSTOPTS) || (defined(HAVE_DECL_IPPROTO_DSTOPTS) && HAVE_DECL_IPPROTO_DSTOPTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_DSTOPTS) == (60), "IPPROTO_DSTOPTS != 60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_DSTOPTS 60
#endif
#if defined(IPPROTO_DSTOPTS) || (defined(HAVE_DECL_IPPROTO_DSTOPTS) && HAVE_DECL_IPPROTO_DSTOPTS)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_DSTOPTS)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_DSTOPTS"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_DSTOPTS)
#endif
#if defined(IPPROTO_MTP) || (defined(HAVE_DECL_IPPROTO_MTP) && HAVE_DECL_IPPROTO_MTP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_MTP) == (92), "IPPROTO_MTP != 92");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_MTP 92
#endif
#if defined(IPPROTO_MTP) || (defined(HAVE_DECL_IPPROTO_MTP) && HAVE_DECL_IPPROTO_MTP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_MTP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_MTP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_MTP)
#endif
#if defined(IPPROTO_BEETPH) || (defined(HAVE_DECL_IPPROTO_BEETPH) && HAVE_DECL_IPPROTO_BEETPH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_BEETPH) == (94), "IPPROTO_BEETPH != 94");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_BEETPH 94
#endif
#if defined(IPPROTO_BEETPH) || (defined(HAVE_DECL_IPPROTO_BEETPH) && HAVE_DECL_IPPROTO_BEETPH)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_BEETPH)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_BEETPH"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_BEETPH)
#endif
#if defined(IPPROTO_ENCAP) || (defined(HAVE_DECL_IPPROTO_ENCAP) && HAVE_DECL_IPPROTO_ENCAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_ENCAP) == (98), "IPPROTO_ENCAP != 98");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_ENCAP 98
#endif
#if defined(IPPROTO_ENCAP) || (defined(HAVE_DECL_IPPROTO_ENCAP) && HAVE_DECL_IPPROTO_ENCAP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_ENCAP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_ENCAP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_ENCAP)
#endif
#if defined(IPPROTO_PIM) || (defined(HAVE_DECL_IPPROTO_PIM) && HAVE_DECL_IPPROTO_PIM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_PIM) == (103), "IPPROTO_PIM != 103");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_PIM 103
#endif
#if defined(IPPROTO_PIM) || (defined(HAVE_DECL_IPPROTO_PIM) && HAVE_DECL_IPPROTO_PIM)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_PIM)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_PIM"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_PIM)
#endif
#if defined(IPPROTO_COMP) || (defined(HAVE_DECL_IPPROTO_COMP) && HAVE_DECL_IPPROTO_COMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_COMP) == (108), "IPPROTO_COMP != 108");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_COMP 108
#endif
#if defined(IPPROTO_COMP) || (defined(HAVE_DECL_IPPROTO_COMP) && HAVE_DECL_IPPROTO_COMP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_COMP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_COMP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_COMP)
#endif
#if defined(IPPROTO_L2TP) || (defined(HAVE_DECL_IPPROTO_L2TP) && HAVE_DECL_IPPROTO_L2TP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_L2TP) == (115), "IPPROTO_L2TP != 115");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_L2TP 115
#endif
#if defined(IPPROTO_L2TP) || (defined(HAVE_DECL_IPPROTO_L2TP) && HAVE_DECL_IPPROTO_L2TP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_L2TP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_L2TP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_L2TP)
#endif
#if defined(IPPROTO_SCTP) || (defined(HAVE_DECL_IPPROTO_SCTP) && HAVE_DECL_IPPROTO_SCTP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_SCTP) == (132), "IPPROTO_SCTP != 132");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_SCTP 132
#endif
#if defined(IPPROTO_SCTP) || (defined(HAVE_DECL_IPPROTO_SCTP) && HAVE_DECL_IPPROTO_SCTP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_SCTP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_SCTP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_SCTP)
#endif
#if defined(IPPROTO_MH) || (defined(HAVE_DECL_IPPROTO_MH) && HAVE_DECL_IPPROTO_MH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_MH) == (135), "IPPROTO_MH != 135");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_MH 135
#endif
#if defined(IPPROTO_MH) || (defined(HAVE_DECL_IPPROTO_MH) && HAVE_DECL_IPPROTO_MH)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_MH)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_MH"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_MH)
#endif
#if defined(IPPROTO_UDPLITE) || (defined(HAVE_DECL_IPPROTO_UDPLITE) && HAVE_DECL_IPPROTO_UDPLITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_UDPLITE) == (136), "IPPROTO_UDPLITE != 136");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_UDPLITE 136
#endif
#if defined(IPPROTO_UDPLITE) || (defined(HAVE_DECL_IPPROTO_UDPLITE) && HAVE_DECL_IPPROTO_UDPLITE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_UDPLITE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_UDPLITE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_UDPLITE)
#endif
#if defined(IPPROTO_MPLS) || (defined(HAVE_DECL_IPPROTO_MPLS) && HAVE_DECL_IPPROTO_MPLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_MPLS) == (137), "IPPROTO_MPLS != 137");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_MPLS 137
#endif
#if defined(IPPROTO_MPLS) || (defined(HAVE_DECL_IPPROTO_MPLS) && HAVE_DECL_IPPROTO_MPLS)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_MPLS)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_MPLS"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_MPLS)
#endif
#if defined(IPPROTO_ETHERNET) || (defined(HAVE_DECL_IPPROTO_ETHERNET) && HAVE_DECL_IPPROTO_ETHERNET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_ETHERNET) == (143), "IPPROTO_ETHERNET != 143");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_ETHERNET 143
#endif
#if defined(IPPROTO_ETHERNET) || (defined(HAVE_DECL_IPPROTO_ETHERNET) && HAVE_DECL_IPPROTO_ETHERNET)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_ETHERNET)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_ETHERNET"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_ETHERNET)
#endif
#if defined(IPPROTO_RAW) || (defined(HAVE_DECL_IPPROTO_RAW) && HAVE_DECL_IPPROTO_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_RAW) == (255), "IPPROTO_RAW != 255");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_RAW 255
#endif
#if defined(IPPROTO_RAW) || (defined(HAVE_DECL_IPPROTO_RAW) && HAVE_DECL_IPPROTO_RAW)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_RAW)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_RAW"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_RAW)
#endif
#if defined(IPPROTO_SMC) || (defined(HAVE_DECL_IPPROTO_SMC) && HAVE_DECL_IPPROTO_SMC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_SMC) == (256), "IPPROTO_SMC != 256");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_SMC 256
#endif
#if defined(IPPROTO_SMC) || (defined(HAVE_DECL_IPPROTO_SMC) && HAVE_DECL_IPPROTO_SMC)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_SMC)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_SMC"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_SMC)
#endif
#if defined(IPPROTO_MPTCP) || (defined(HAVE_DECL_IPPROTO_MPTCP) && HAVE_DECL_IPPROTO_MPTCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPPROTO_MPTCP) == (262), "IPPROTO_MPTCP != 262");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPPROTO_MPTCP 262
#endif
#if defined(IPPROTO_MPTCP) || (defined(HAVE_DECL_IPPROTO_MPTCP) && HAVE_DECL_IPPROTO_MPTCP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (IPPROTO_MPTCP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: IPPROTO_MPTCP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (IPPROTO_MPTCP)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data inet_protocols_xdata[] = {
 XLAT(IPPROTO_IP),
 #define XLAT_VAL_0 ((unsigned) (IPPROTO_IP))
 #define XLAT_STR_0 STRINGIFY(IPPROTO_IP)
 XLAT(IPPROTO_ICMP),
 #define XLAT_VAL_1 ((unsigned) (IPPROTO_ICMP))
 #define XLAT_STR_1 STRINGIFY(IPPROTO_ICMP)
 XLAT(IPPROTO_IGMP),
 #define XLAT_VAL_2 ((unsigned) (IPPROTO_IGMP))
 #define XLAT_STR_2 STRINGIFY(IPPROTO_IGMP)
 XLAT(IPPROTO_IPIP),
 #define XLAT_VAL_3 ((unsigned) (IPPROTO_IPIP))
 #define XLAT_STR_3 STRINGIFY(IPPROTO_IPIP)
 XLAT(IPPROTO_TCP),
 #define XLAT_VAL_4 ((unsigned) (IPPROTO_TCP))
 #define XLAT_STR_4 STRINGIFY(IPPROTO_TCP)
 XLAT(IPPROTO_EGP),
 #define XLAT_VAL_5 ((unsigned) (IPPROTO_EGP))
 #define XLAT_STR_5 STRINGIFY(IPPROTO_EGP)
 XLAT(IPPROTO_PUP),
 #define XLAT_VAL_6 ((unsigned) (IPPROTO_PUP))
 #define XLAT_STR_6 STRINGIFY(IPPROTO_PUP)
 XLAT(IPPROTO_UDP),
 #define XLAT_VAL_7 ((unsigned) (IPPROTO_UDP))
 #define XLAT_STR_7 STRINGIFY(IPPROTO_UDP)
 XLAT(IPPROTO_IDP),
 #define XLAT_VAL_8 ((unsigned) (IPPROTO_IDP))
 #define XLAT_STR_8 STRINGIFY(IPPROTO_IDP)
 XLAT(IPPROTO_TP),
 #define XLAT_VAL_9 ((unsigned) (IPPROTO_TP))
 #define XLAT_STR_9 STRINGIFY(IPPROTO_TP)
 XLAT(IPPROTO_DCCP),
 #define XLAT_VAL_10 ((unsigned) (IPPROTO_DCCP))
 #define XLAT_STR_10 STRINGIFY(IPPROTO_DCCP)
 XLAT(IPPROTO_IPV6),
 #define XLAT_VAL_11 ((unsigned) (IPPROTO_IPV6))
 #define XLAT_STR_11 STRINGIFY(IPPROTO_IPV6)
 XLAT(IPPROTO_ROUTING),
 #define XLAT_VAL_12 ((unsigned) (IPPROTO_ROUTING))
 #define XLAT_STR_12 STRINGIFY(IPPROTO_ROUTING)
 XLAT(IPPROTO_FRAGMENT),
 #define XLAT_VAL_13 ((unsigned) (IPPROTO_FRAGMENT))
 #define XLAT_STR_13 STRINGIFY(IPPROTO_FRAGMENT)
 XLAT(IPPROTO_RSVP),
 #define XLAT_VAL_14 ((unsigned) (IPPROTO_RSVP))
 #define XLAT_STR_14 STRINGIFY(IPPROTO_RSVP)
 XLAT(IPPROTO_GRE),
 #define XLAT_VAL_15 ((unsigned) (IPPROTO_GRE))
 #define XLAT_STR_15 STRINGIFY(IPPROTO_GRE)
 XLAT(IPPROTO_ESP),
 #define XLAT_VAL_16 ((unsigned) (IPPROTO_ESP))
 #define XLAT_STR_16 STRINGIFY(IPPROTO_ESP)
 XLAT(IPPROTO_AH),
 #define XLAT_VAL_17 ((unsigned) (IPPROTO_AH))
 #define XLAT_STR_17 STRINGIFY(IPPROTO_AH)
 XLAT(IPPROTO_ICMPV6),
 #define XLAT_VAL_18 ((unsigned) (IPPROTO_ICMPV6))
 #define XLAT_STR_18 STRINGIFY(IPPROTO_ICMPV6)
 XLAT(IPPROTO_NONE),
 #define XLAT_VAL_19 ((unsigned) (IPPROTO_NONE))
 #define XLAT_STR_19 STRINGIFY(IPPROTO_NONE)
 XLAT(IPPROTO_DSTOPTS),
 #define XLAT_VAL_20 ((unsigned) (IPPROTO_DSTOPTS))
 #define XLAT_STR_20 STRINGIFY(IPPROTO_DSTOPTS)
 XLAT(IPPROTO_MTP),
 #define XLAT_VAL_21 ((unsigned) (IPPROTO_MTP))
 #define XLAT_STR_21 STRINGIFY(IPPROTO_MTP)
 XLAT(IPPROTO_BEETPH),
 #define XLAT_VAL_22 ((unsigned) (IPPROTO_BEETPH))
 #define XLAT_STR_22 STRINGIFY(IPPROTO_BEETPH)
 XLAT(IPPROTO_ENCAP),
 #define XLAT_VAL_23 ((unsigned) (IPPROTO_ENCAP))
 #define XLAT_STR_23 STRINGIFY(IPPROTO_ENCAP)
 XLAT(IPPROTO_PIM),
 #define XLAT_VAL_24 ((unsigned) (IPPROTO_PIM))
 #define XLAT_STR_24 STRINGIFY(IPPROTO_PIM)
 XLAT(IPPROTO_COMP),
 #define XLAT_VAL_25 ((unsigned) (IPPROTO_COMP))
 #define XLAT_STR_25 STRINGIFY(IPPROTO_COMP)
 XLAT(IPPROTO_L2TP),
 #define XLAT_VAL_26 ((unsigned) (IPPROTO_L2TP))
 #define XLAT_STR_26 STRINGIFY(IPPROTO_L2TP)
 XLAT(IPPROTO_SCTP),
 #define XLAT_VAL_27 ((unsigned) (IPPROTO_SCTP))
 #define XLAT_STR_27 STRINGIFY(IPPROTO_SCTP)
 XLAT(IPPROTO_MH),
 #define XLAT_VAL_28 ((unsigned) (IPPROTO_MH))
 #define XLAT_STR_28 STRINGIFY(IPPROTO_MH)
 XLAT(IPPROTO_UDPLITE),
 #define XLAT_VAL_29 ((unsigned) (IPPROTO_UDPLITE))
 #define XLAT_STR_29 STRINGIFY(IPPROTO_UDPLITE)
 XLAT(IPPROTO_MPLS),
 #define XLAT_VAL_30 ((unsigned) (IPPROTO_MPLS))
 #define XLAT_STR_30 STRINGIFY(IPPROTO_MPLS)
 XLAT(IPPROTO_ETHERNET),
 #define XLAT_VAL_31 ((unsigned) (IPPROTO_ETHERNET))
 #define XLAT_STR_31 STRINGIFY(IPPROTO_ETHERNET)
 XLAT(IPPROTO_RAW),
 #define XLAT_VAL_32 ((unsigned) (IPPROTO_RAW))
 #define XLAT_STR_32 STRINGIFY(IPPROTO_RAW)
 XLAT(IPPROTO_SMC),
 #define XLAT_VAL_33 ((unsigned) (IPPROTO_SMC))
 #define XLAT_STR_33 STRINGIFY(IPPROTO_SMC)
 XLAT(IPPROTO_MPTCP),
 #define XLAT_VAL_34 ((unsigned) (IPPROTO_MPTCP))
 #define XLAT_STR_34 STRINGIFY(IPPROTO_MPTCP)
};
const struct xlat inet_protocols[1] = { {
 .data = inet_protocols_xdata,
 .size = ARRAY_SIZE(inet_protocols_xdata),
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
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
#  endif
#  ifdef XLAT_VAL_29
  | XLAT_VAL_29
#  endif
#  ifdef XLAT_VAL_30
  | XLAT_VAL_30
#  endif
#  ifdef XLAT_VAL_31
  | XLAT_VAL_31
#  endif
#  ifdef XLAT_VAL_32
  | XLAT_VAL_32
#  endif
#  ifdef XLAT_VAL_33
  | XLAT_VAL_33
#  endif
#  ifdef XLAT_VAL_34
  | XLAT_VAL_34
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
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
#  endif
#  ifdef XLAT_STR_29
  + sizeof(XLAT_STR_29)
#  endif
#  ifdef XLAT_STR_30
  + sizeof(XLAT_STR_30)
#  endif
#  ifdef XLAT_STR_31
  + sizeof(XLAT_STR_31)
#  endif
#  ifdef XLAT_STR_32
  + sizeof(XLAT_STR_32)
#  endif
#  ifdef XLAT_STR_33
  + sizeof(XLAT_STR_33)
#  endif
#  ifdef XLAT_STR_34
  + sizeof(XLAT_STR_34)
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
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
#  undef XLAT_STR_29
#  undef XLAT_VAL_29
#  undef XLAT_STR_30
#  undef XLAT_VAL_30
#  undef XLAT_STR_31
#  undef XLAT_VAL_31
#  undef XLAT_STR_32
#  undef XLAT_VAL_32
#  undef XLAT_STR_33
#  undef XLAT_VAL_33
#  undef XLAT_STR_34
#  undef XLAT_VAL_34
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
