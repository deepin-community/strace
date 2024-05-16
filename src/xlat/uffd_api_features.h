/* Generated by ./src/xlat/gen.sh from ./src/xlat/uffd_api_features.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uffd_api_features in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data uffd_api_features_xdata[] = {
 XLAT_TYPE(uint64_t, UFFD_FEATURE_PAGEFAULT_FLAG_WP),
 #define XLAT_VAL_0 ((uint64_t) (UFFD_FEATURE_PAGEFAULT_FLAG_WP))
 #define XLAT_STR_0 STRINGIFY(UFFD_FEATURE_PAGEFAULT_FLAG_WP)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_EVENT_FORK),
 #define XLAT_VAL_1 ((uint64_t) (UFFD_FEATURE_EVENT_FORK))
 #define XLAT_STR_1 STRINGIFY(UFFD_FEATURE_EVENT_FORK)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_EVENT_REMAP),
 #define XLAT_VAL_2 ((uint64_t) (UFFD_FEATURE_EVENT_REMAP))
 #define XLAT_STR_2 STRINGIFY(UFFD_FEATURE_EVENT_REMAP)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_EVENT_REMOVE),
 #define XLAT_VAL_3 ((uint64_t) (UFFD_FEATURE_EVENT_REMOVE))
 #define XLAT_STR_3 STRINGIFY(UFFD_FEATURE_EVENT_REMOVE)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_MISSING_HUGETLBFS),
 #define XLAT_VAL_4 ((uint64_t) (UFFD_FEATURE_MISSING_HUGETLBFS))
 #define XLAT_STR_4 STRINGIFY(UFFD_FEATURE_MISSING_HUGETLBFS)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_MISSING_SHMEM),
 #define XLAT_VAL_5 ((uint64_t) (UFFD_FEATURE_MISSING_SHMEM))
 #define XLAT_STR_5 STRINGIFY(UFFD_FEATURE_MISSING_SHMEM)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_EVENT_UNMAP),
 #define XLAT_VAL_6 ((uint64_t) (UFFD_FEATURE_EVENT_UNMAP))
 #define XLAT_STR_6 STRINGIFY(UFFD_FEATURE_EVENT_UNMAP)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_SIGBUS),
 #define XLAT_VAL_7 ((uint64_t) (UFFD_FEATURE_SIGBUS))
 #define XLAT_STR_7 STRINGIFY(UFFD_FEATURE_SIGBUS)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_THREAD_ID),
 #define XLAT_VAL_8 ((uint64_t) (UFFD_FEATURE_THREAD_ID))
 #define XLAT_STR_8 STRINGIFY(UFFD_FEATURE_THREAD_ID)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_MINOR_HUGETLBFS),
 #define XLAT_VAL_9 ((uint64_t) (UFFD_FEATURE_MINOR_HUGETLBFS))
 #define XLAT_STR_9 STRINGIFY(UFFD_FEATURE_MINOR_HUGETLBFS)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_MINOR_SHMEM),
 #define XLAT_VAL_10 ((uint64_t) (UFFD_FEATURE_MINOR_SHMEM))
 #define XLAT_STR_10 STRINGIFY(UFFD_FEATURE_MINOR_SHMEM)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_EXACT_ADDRESS),
 #define XLAT_VAL_11 ((uint64_t) (UFFD_FEATURE_EXACT_ADDRESS))
 #define XLAT_STR_11 STRINGIFY(UFFD_FEATURE_EXACT_ADDRESS)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_WP_HUGETLBFS_SHMEM),
 #define XLAT_VAL_12 ((uint64_t) (UFFD_FEATURE_WP_HUGETLBFS_SHMEM))
 #define XLAT_STR_12 STRINGIFY(UFFD_FEATURE_WP_HUGETLBFS_SHMEM)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_WP_UNPOPULATED),
 #define XLAT_VAL_13 ((uint64_t) (UFFD_FEATURE_WP_UNPOPULATED))
 #define XLAT_STR_13 STRINGIFY(UFFD_FEATURE_WP_UNPOPULATED)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_POISON),
 #define XLAT_VAL_14 ((uint64_t) (UFFD_FEATURE_POISON))
 #define XLAT_STR_14 STRINGIFY(UFFD_FEATURE_POISON)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_WP_ASYNC),
 #define XLAT_VAL_15 ((uint64_t) (UFFD_FEATURE_WP_ASYNC))
 #define XLAT_STR_15 STRINGIFY(UFFD_FEATURE_WP_ASYNC)
 XLAT_TYPE(uint64_t, UFFD_FEATURE_MOVE),
 #define XLAT_VAL_16 ((uint64_t) (UFFD_FEATURE_MOVE))
 #define XLAT_STR_16 STRINGIFY(UFFD_FEATURE_MOVE)
};
static
const struct xlat uffd_api_features[1] = { {
 .data = uffd_api_features_xdata,
 .size = ARRAY_SIZE(uffd_api_features_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
