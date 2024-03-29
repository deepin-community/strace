/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_tca_act_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TCA_ACT_FLAGS_NO_PERCPU_STATS) || (defined(HAVE_DECL_TCA_ACT_FLAGS_NO_PERCPU_STATS) && HAVE_DECL_TCA_ACT_FLAGS_NO_PERCPU_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_FLAGS_NO_PERCPU_STATS) == ((1 << 0)), "TCA_ACT_FLAGS_NO_PERCPU_STATS != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_FLAGS_NO_PERCPU_STATS (1 << 0)
#endif
#if defined(TCA_ACT_FLAGS_SKIP_HW) || (defined(HAVE_DECL_TCA_ACT_FLAGS_SKIP_HW) && HAVE_DECL_TCA_ACT_FLAGS_SKIP_HW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_FLAGS_SKIP_HW) == ((1 << 1)), "TCA_ACT_FLAGS_SKIP_HW != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_FLAGS_SKIP_HW (1 << 1)
#endif
#if defined(TCA_ACT_FLAGS_SKIP_SW) || (defined(HAVE_DECL_TCA_ACT_FLAGS_SKIP_SW) && HAVE_DECL_TCA_ACT_FLAGS_SKIP_SW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_FLAGS_SKIP_SW) == ((1 << 2)), "TCA_ACT_FLAGS_SKIP_SW != (1 << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_FLAGS_SKIP_SW (1 << 2)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_tca_act_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_tca_act_flags_xdata[] = {
 XLAT(TCA_ACT_FLAGS_NO_PERCPU_STATS),
 #define XLAT_VAL_0 ((unsigned) (TCA_ACT_FLAGS_NO_PERCPU_STATS))
 #define XLAT_STR_0 STRINGIFY(TCA_ACT_FLAGS_NO_PERCPU_STATS)
 XLAT(TCA_ACT_FLAGS_SKIP_HW),
 #define XLAT_VAL_1 ((unsigned) (TCA_ACT_FLAGS_SKIP_HW))
 #define XLAT_STR_1 STRINGIFY(TCA_ACT_FLAGS_SKIP_HW)
 XLAT(TCA_ACT_FLAGS_SKIP_SW),
 #define XLAT_VAL_2 ((unsigned) (TCA_ACT_FLAGS_SKIP_SW))
 #define XLAT_STR_2 STRINGIFY(TCA_ACT_FLAGS_SKIP_SW)
};
static
const struct xlat rtnl_tca_act_flags[1] = { {
 .data = rtnl_tca_act_flags_xdata,
 .size = ARRAY_SIZE(rtnl_tca_act_flags_xdata),
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
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
