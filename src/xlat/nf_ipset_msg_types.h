/* Generated by ./src/xlat/gen.sh from ./src/xlat/nf_ipset_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_ipset_msg_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data nf_ipset_msg_types_xdata[] = {
 [IPSET_CMD_NONE] = XLAT(IPSET_CMD_NONE),
 #define XLAT_VAL_0 ((unsigned) (IPSET_CMD_NONE))
 #define XLAT_STR_0 STRINGIFY(IPSET_CMD_NONE)
 [IPSET_CMD_PROTOCOL] = XLAT(IPSET_CMD_PROTOCOL),
 #define XLAT_VAL_1 ((unsigned) (IPSET_CMD_PROTOCOL))
 #define XLAT_STR_1 STRINGIFY(IPSET_CMD_PROTOCOL)
 [IPSET_CMD_CREATE] = XLAT(IPSET_CMD_CREATE),
 #define XLAT_VAL_2 ((unsigned) (IPSET_CMD_CREATE))
 #define XLAT_STR_2 STRINGIFY(IPSET_CMD_CREATE)
 [IPSET_CMD_DESTROY] = XLAT(IPSET_CMD_DESTROY),
 #define XLAT_VAL_3 ((unsigned) (IPSET_CMD_DESTROY))
 #define XLAT_STR_3 STRINGIFY(IPSET_CMD_DESTROY)
 [IPSET_CMD_FLUSH] = XLAT(IPSET_CMD_FLUSH),
 #define XLAT_VAL_4 ((unsigned) (IPSET_CMD_FLUSH))
 #define XLAT_STR_4 STRINGIFY(IPSET_CMD_FLUSH)
 [IPSET_CMD_RENAME] = XLAT(IPSET_CMD_RENAME),
 #define XLAT_VAL_5 ((unsigned) (IPSET_CMD_RENAME))
 #define XLAT_STR_5 STRINGIFY(IPSET_CMD_RENAME)
 [IPSET_CMD_SWAP] = XLAT(IPSET_CMD_SWAP),
 #define XLAT_VAL_6 ((unsigned) (IPSET_CMD_SWAP))
 #define XLAT_STR_6 STRINGIFY(IPSET_CMD_SWAP)
 [IPSET_CMD_LIST] = XLAT(IPSET_CMD_LIST),
 #define XLAT_VAL_7 ((unsigned) (IPSET_CMD_LIST))
 #define XLAT_STR_7 STRINGIFY(IPSET_CMD_LIST)
 [IPSET_CMD_SAVE] = XLAT(IPSET_CMD_SAVE),
 #define XLAT_VAL_8 ((unsigned) (IPSET_CMD_SAVE))
 #define XLAT_STR_8 STRINGIFY(IPSET_CMD_SAVE)
 [IPSET_CMD_ADD] = XLAT(IPSET_CMD_ADD),
 #define XLAT_VAL_9 ((unsigned) (IPSET_CMD_ADD))
 #define XLAT_STR_9 STRINGIFY(IPSET_CMD_ADD)
 [IPSET_CMD_DEL] = XLAT(IPSET_CMD_DEL),
 #define XLAT_VAL_10 ((unsigned) (IPSET_CMD_DEL))
 #define XLAT_STR_10 STRINGIFY(IPSET_CMD_DEL)
 [IPSET_CMD_TEST] = XLAT(IPSET_CMD_TEST),
 #define XLAT_VAL_11 ((unsigned) (IPSET_CMD_TEST))
 #define XLAT_STR_11 STRINGIFY(IPSET_CMD_TEST)
 [IPSET_CMD_HEADER] = XLAT(IPSET_CMD_HEADER),
 #define XLAT_VAL_12 ((unsigned) (IPSET_CMD_HEADER))
 #define XLAT_STR_12 STRINGIFY(IPSET_CMD_HEADER)
 [IPSET_CMD_TYPE] = XLAT(IPSET_CMD_TYPE),
 #define XLAT_VAL_13 ((unsigned) (IPSET_CMD_TYPE))
 #define XLAT_STR_13 STRINGIFY(IPSET_CMD_TYPE)

 [IPSET_CMD_RESTORE] = XLAT(IPSET_CMD_RESTORE),
 #define XLAT_VAL_14 ((unsigned) (IPSET_CMD_RESTORE))
 #define XLAT_STR_14 STRINGIFY(IPSET_CMD_RESTORE)
 [IPSET_CMD_HELP] = XLAT(IPSET_CMD_HELP),
 #define XLAT_VAL_15 ((unsigned) (IPSET_CMD_HELP))
 #define XLAT_STR_15 STRINGIFY(IPSET_CMD_HELP)
 [IPSET_CMD_VERSION] = XLAT(IPSET_CMD_VERSION),
 #define XLAT_VAL_16 ((unsigned) (IPSET_CMD_VERSION))
 #define XLAT_STR_16 STRINGIFY(IPSET_CMD_VERSION)
 [IPSET_CMD_QUIT] = XLAT(IPSET_CMD_QUIT),
 #define XLAT_VAL_17 ((unsigned) (IPSET_CMD_QUIT))
 #define XLAT_STR_17 STRINGIFY(IPSET_CMD_QUIT)

 [IPSET_CMD_COMMIT] = XLAT(IPSET_CMD_COMMIT),
 #define XLAT_VAL_18 ((unsigned) (IPSET_CMD_COMMIT))
 #define XLAT_STR_18 STRINGIFY(IPSET_CMD_COMMIT)
};
static
const struct xlat nf_ipset_msg_types[1] = { {
 .data = nf_ipset_msg_types_xdata,
 .size = ARRAY_SIZE(nf_ipset_msg_types_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */