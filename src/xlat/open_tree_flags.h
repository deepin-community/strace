/* Generated by ./src/xlat/gen.sh from ./src/xlat/open_tree_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat open_tree_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data open_tree_flags_xdata[] = {
 XLAT(OPEN_TREE_CLONE),
 #define XLAT_VAL_0 ((unsigned) (OPEN_TREE_CLONE))
 #define XLAT_STR_0 STRINGIFY(OPEN_TREE_CLONE)
 XLAT(OPEN_TREE_CLOEXEC),
 #define XLAT_VAL_1 ((unsigned) (OPEN_TREE_CLOEXEC))
 #define XLAT_STR_1 STRINGIFY(OPEN_TREE_CLOEXEC)
 XLAT(AT_SYMLINK_NOFOLLOW),
 #define XLAT_VAL_2 ((unsigned) (AT_SYMLINK_NOFOLLOW))
 #define XLAT_STR_2 STRINGIFY(AT_SYMLINK_NOFOLLOW)
 XLAT(AT_REMOVEDIR),
 #define XLAT_VAL_3 ((unsigned) (AT_REMOVEDIR))
 #define XLAT_STR_3 STRINGIFY(AT_REMOVEDIR)
 XLAT(AT_SYMLINK_FOLLOW),
 #define XLAT_VAL_4 ((unsigned) (AT_SYMLINK_FOLLOW))
 #define XLAT_STR_4 STRINGIFY(AT_SYMLINK_FOLLOW)
 XLAT(AT_NO_AUTOMOUNT),
 #define XLAT_VAL_5 ((unsigned) (AT_NO_AUTOMOUNT))
 #define XLAT_STR_5 STRINGIFY(AT_NO_AUTOMOUNT)
 XLAT(AT_EMPTY_PATH),
 #define XLAT_VAL_6 ((unsigned) (AT_EMPTY_PATH))
 #define XLAT_STR_6 STRINGIFY(AT_EMPTY_PATH)
 XLAT(AT_RECURSIVE),
 #define XLAT_VAL_7 ((unsigned) (AT_RECURSIVE))
 #define XLAT_STR_7 STRINGIFY(AT_RECURSIVE)
};
static
const struct xlat open_tree_flags[1] = { {
 .data = open_tree_flags_xdata,
 .size = ARRAY_SIZE(open_tree_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
