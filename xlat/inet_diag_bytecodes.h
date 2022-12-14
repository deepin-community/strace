/* Generated by ./xlat/gen.sh from ./xlat/inet_diag_bytecodes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat inet_diag_bytecodes in mpers mode

# else

static const struct xlat_data inet_diag_bytecodes_xdata[] = {
 [INET_DIAG_BC_NOP] = XLAT(INET_DIAG_BC_NOP),
 #define XLAT_VAL_0 ((unsigned) (INET_DIAG_BC_NOP))
 #define XLAT_STR_0 STRINGIFY(INET_DIAG_BC_NOP)
 [INET_DIAG_BC_JMP] = XLAT(INET_DIAG_BC_JMP),
 #define XLAT_VAL_1 ((unsigned) (INET_DIAG_BC_JMP))
 #define XLAT_STR_1 STRINGIFY(INET_DIAG_BC_JMP)
 [INET_DIAG_BC_S_GE] = XLAT(INET_DIAG_BC_S_GE),
 #define XLAT_VAL_2 ((unsigned) (INET_DIAG_BC_S_GE))
 #define XLAT_STR_2 STRINGIFY(INET_DIAG_BC_S_GE)
 [INET_DIAG_BC_S_LE] = XLAT(INET_DIAG_BC_S_LE),
 #define XLAT_VAL_3 ((unsigned) (INET_DIAG_BC_S_LE))
 #define XLAT_STR_3 STRINGIFY(INET_DIAG_BC_S_LE)
 [INET_DIAG_BC_D_GE] = XLAT(INET_DIAG_BC_D_GE),
 #define XLAT_VAL_4 ((unsigned) (INET_DIAG_BC_D_GE))
 #define XLAT_STR_4 STRINGIFY(INET_DIAG_BC_D_GE)
 [INET_DIAG_BC_D_LE] = XLAT(INET_DIAG_BC_D_LE),
 #define XLAT_VAL_5 ((unsigned) (INET_DIAG_BC_D_LE))
 #define XLAT_STR_5 STRINGIFY(INET_DIAG_BC_D_LE)
 [INET_DIAG_BC_AUTO] = XLAT(INET_DIAG_BC_AUTO),
 #define XLAT_VAL_6 ((unsigned) (INET_DIAG_BC_AUTO))
 #define XLAT_STR_6 STRINGIFY(INET_DIAG_BC_AUTO)
 [INET_DIAG_BC_S_COND] = XLAT(INET_DIAG_BC_S_COND),
 #define XLAT_VAL_7 ((unsigned) (INET_DIAG_BC_S_COND))
 #define XLAT_STR_7 STRINGIFY(INET_DIAG_BC_S_COND)
 [INET_DIAG_BC_D_COND] = XLAT(INET_DIAG_BC_D_COND),
 #define XLAT_VAL_8 ((unsigned) (INET_DIAG_BC_D_COND))
 #define XLAT_STR_8 STRINGIFY(INET_DIAG_BC_D_COND)
 [INET_DIAG_BC_DEV_COND] = XLAT(INET_DIAG_BC_DEV_COND),
 #define XLAT_VAL_9 ((unsigned) (INET_DIAG_BC_DEV_COND))
 #define XLAT_STR_9 STRINGIFY(INET_DIAG_BC_DEV_COND)
 [INET_DIAG_BC_MARK_COND] = XLAT(INET_DIAG_BC_MARK_COND),
 #define XLAT_VAL_10 ((unsigned) (INET_DIAG_BC_MARK_COND))
 #define XLAT_STR_10 STRINGIFY(INET_DIAG_BC_MARK_COND)
 [INET_DIAG_BC_S_EQ] = XLAT(INET_DIAG_BC_S_EQ),
 #define XLAT_VAL_11 ((unsigned) (INET_DIAG_BC_S_EQ))
 #define XLAT_STR_11 STRINGIFY(INET_DIAG_BC_S_EQ)
 [INET_DIAG_BC_D_EQ] = XLAT(INET_DIAG_BC_D_EQ),
 #define XLAT_VAL_12 ((unsigned) (INET_DIAG_BC_D_EQ))
 #define XLAT_STR_12 STRINGIFY(INET_DIAG_BC_D_EQ)
 [INET_DIAG_BC_CGROUP_COND] = XLAT(INET_DIAG_BC_CGROUP_COND),
 #define XLAT_VAL_13 ((unsigned) (INET_DIAG_BC_CGROUP_COND))
 #define XLAT_STR_13 STRINGIFY(INET_DIAG_BC_CGROUP_COND)
};
static
const struct xlat inet_diag_bytecodes[1] = { {
 .data = inet_diag_bytecodes_xdata,
 .size = ARRAY_SIZE(inet_diag_bytecodes_xdata),
 .type = XT_INDEXED,
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
  ,
} };

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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
