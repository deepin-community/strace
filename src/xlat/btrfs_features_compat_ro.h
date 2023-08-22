/* Generated by ./src/xlat/gen.sh from ./src/xlat/btrfs_features_compat_ro.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_features_compat_ro[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data btrfs_features_compat_ro_xdata[] = {
 XLAT_TYPE(uint64_t, BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE),
 #define XLAT_VAL_0 ((uint64_t) (BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE))
 #define XLAT_STR_0 STRINGIFY(BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE)
 XLAT_TYPE(uint64_t, BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE_VALID),
 #define XLAT_VAL_1 ((uint64_t) (BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE_VALID))
 #define XLAT_STR_1 STRINGIFY(BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE_VALID)
 XLAT_TYPE(uint64_t, BTRFS_FEATURE_COMPAT_RO_VERITY),
 #define XLAT_VAL_2 ((uint64_t) (BTRFS_FEATURE_COMPAT_RO_VERITY))
 #define XLAT_STR_2 STRINGIFY(BTRFS_FEATURE_COMPAT_RO_VERITY)
 XLAT_TYPE(uint64_t, BTRFS_FEATURE_COMPAT_RO_BLOCK_GROUP_TREE),
 #define XLAT_VAL_3 ((uint64_t) (BTRFS_FEATURE_COMPAT_RO_BLOCK_GROUP_TREE))
 #define XLAT_STR_3 STRINGIFY(BTRFS_FEATURE_COMPAT_RO_BLOCK_GROUP_TREE)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_features_compat_ro[1] = { {
 .data = btrfs_features_compat_ro_xdata,
 .size = ARRAY_SIZE(btrfs_features_compat_ro_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
