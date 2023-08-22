/* Generated by ./src/xlat/gen.sh from ./src/xlat/neighbor_cache_entry_ext_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NTF_EXT_MANAGED) || (defined(HAVE_DECL_NTF_EXT_MANAGED) && HAVE_DECL_NTF_EXT_MANAGED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NTF_EXT_MANAGED) == ((1 << 0)), "NTF_EXT_MANAGED != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NTF_EXT_MANAGED (1 << 0)
#endif
#if defined(NTF_EXT_LOCKED) || (defined(HAVE_DECL_NTF_EXT_LOCKED) && HAVE_DECL_NTF_EXT_LOCKED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NTF_EXT_LOCKED) == ((1 << 1)), "NTF_EXT_LOCKED != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NTF_EXT_LOCKED (1 << 1)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat neighbor_cache_entry_ext_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data neighbor_cache_entry_ext_flags_xdata[] = {
 XLAT(NTF_EXT_MANAGED),
 #define XLAT_VAL_0 ((unsigned) (NTF_EXT_MANAGED))
 #define XLAT_STR_0 STRINGIFY(NTF_EXT_MANAGED)
 XLAT(NTF_EXT_LOCKED),
 #define XLAT_VAL_1 ((unsigned) (NTF_EXT_LOCKED))
 #define XLAT_STR_1 STRINGIFY(NTF_EXT_LOCKED)
};
static
const struct xlat neighbor_cache_entry_ext_flags[1] = { {
 .data = neighbor_cache_entry_ext_flags_xdata,
 .size = ARRAY_SIZE(neighbor_cache_entry_ext_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */