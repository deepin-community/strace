/* Generated by ./src/xlat/gen.sh from ./src/xlat/madvise_hppa_old_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat madvise_hppa_old_cmds in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data madvise_hppa_old_cmds_xdata[] = {

 XLAT_PAIR(65, "MADV_MERGEABLE"),
 #define XLAT_VAL_0 ((unsigned) (65))
 #define XLAT_STR_0 "MADV_MERGEABLE"
 XLAT_PAIR(66, "MADV_UNMERGEABLE"),
 #define XLAT_VAL_1 ((unsigned) (66))
 #define XLAT_STR_1 "MADV_UNMERGEABLE"
 XLAT_PAIR(67, "MADV_HUGEPAGE"),
 #define XLAT_VAL_2 ((unsigned) (67))
 #define XLAT_STR_2 "MADV_HUGEPAGE"
 XLAT_PAIR(68, "MADV_NOHUGEPAGE"),
 #define XLAT_VAL_3 ((unsigned) (68))
 #define XLAT_STR_3 "MADV_NOHUGEPAGE"
 XLAT_PAIR(69, "MADV_DONTDUMP"),
 #define XLAT_VAL_4 ((unsigned) (69))
 #define XLAT_STR_4 "MADV_DONTDUMP"
 XLAT_PAIR(70, "MADV_DODUMP"),
 #define XLAT_VAL_5 ((unsigned) (70))
 #define XLAT_STR_5 "MADV_DODUMP"
 XLAT_PAIR(71, "MADV_WIPEONFORK"),
 #define XLAT_VAL_6 ((unsigned) (71))
 #define XLAT_STR_6 "MADV_WIPEONFORK"
 XLAT_PAIR(72, "MADV_KEEPONFORK"),
 #define XLAT_VAL_7 ((unsigned) (72))
 #define XLAT_STR_7 "MADV_KEEPONFORK"
 XLAT_PAIR(73, "MADV_COLLAPSE"),
 #define XLAT_VAL_8 ((unsigned) (73))
 #define XLAT_STR_8 "MADV_COLLAPSE"
};
static
const struct xlat madvise_hppa_old_cmds[1] = { {
 .data = madvise_hppa_old_cmds_xdata,
 .size = ARRAY_SIZE(madvise_hppa_old_cmds_xdata),
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
