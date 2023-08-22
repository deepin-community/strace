/* Generated by ./src/xlat/gen.sh from ./src/xlat/ifaddrflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ifaddrflags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data ifaddrflags_xdata[] = {
 XLAT(IFA_F_SECONDARY),
 #define XLAT_VAL_0 ((unsigned) (IFA_F_SECONDARY))
 #define XLAT_STR_0 STRINGIFY(IFA_F_SECONDARY)
 XLAT(IFA_F_NODAD),
 #define XLAT_VAL_1 ((unsigned) (IFA_F_NODAD))
 #define XLAT_STR_1 STRINGIFY(IFA_F_NODAD)
 XLAT(IFA_F_OPTIMISTIC),
 #define XLAT_VAL_2 ((unsigned) (IFA_F_OPTIMISTIC))
 #define XLAT_STR_2 STRINGIFY(IFA_F_OPTIMISTIC)
 XLAT(IFA_F_DADFAILED),
 #define XLAT_VAL_3 ((unsigned) (IFA_F_DADFAILED))
 #define XLAT_STR_3 STRINGIFY(IFA_F_DADFAILED)
 XLAT(IFA_F_HOMEADDRESS),
 #define XLAT_VAL_4 ((unsigned) (IFA_F_HOMEADDRESS))
 #define XLAT_STR_4 STRINGIFY(IFA_F_HOMEADDRESS)
 XLAT(IFA_F_DEPRECATED),
 #define XLAT_VAL_5 ((unsigned) (IFA_F_DEPRECATED))
 #define XLAT_STR_5 STRINGIFY(IFA_F_DEPRECATED)
 XLAT(IFA_F_TENTATIVE),
 #define XLAT_VAL_6 ((unsigned) (IFA_F_TENTATIVE))
 #define XLAT_STR_6 STRINGIFY(IFA_F_TENTATIVE)
 XLAT(IFA_F_PERMANENT),
 #define XLAT_VAL_7 ((unsigned) (IFA_F_PERMANENT))
 #define XLAT_STR_7 STRINGIFY(IFA_F_PERMANENT)
 XLAT(IFA_F_MANAGETEMPADDR),
 #define XLAT_VAL_8 ((unsigned) (IFA_F_MANAGETEMPADDR))
 #define XLAT_STR_8 STRINGIFY(IFA_F_MANAGETEMPADDR)
 XLAT(IFA_F_NOPREFIXROUTE),
 #define XLAT_VAL_9 ((unsigned) (IFA_F_NOPREFIXROUTE))
 #define XLAT_STR_9 STRINGIFY(IFA_F_NOPREFIXROUTE)
 XLAT(IFA_F_MCAUTOJOIN),
 #define XLAT_VAL_10 ((unsigned) (IFA_F_MCAUTOJOIN))
 #define XLAT_STR_10 STRINGIFY(IFA_F_MCAUTOJOIN)
 XLAT(IFA_F_STABLE_PRIVACY),
 #define XLAT_VAL_11 ((unsigned) (IFA_F_STABLE_PRIVACY))
 #define XLAT_STR_11 STRINGIFY(IFA_F_STABLE_PRIVACY)
};
static
const struct xlat ifaddrflags[1] = { {
 .data = ifaddrflags_xdata,
 .size = ARRAY_SIZE(ifaddrflags_xdata),
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
