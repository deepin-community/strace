/* Generated by ./src/xlat/gen.sh from ./src/xlat/tee_ioctl_impl_ids.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat tee_ioctl_impl_ids in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data tee_ioctl_impl_ids_xdata[] = {
 XLAT(TEE_IMPL_ID_OPTEE),
 #define XLAT_VAL_0 ((unsigned) (TEE_IMPL_ID_OPTEE))
 #define XLAT_STR_0 STRINGIFY(TEE_IMPL_ID_OPTEE)
 XLAT(TEE_IMPL_ID_AMDTEE),
 #define XLAT_VAL_1 ((unsigned) (TEE_IMPL_ID_AMDTEE))
 #define XLAT_STR_1 STRINGIFY(TEE_IMPL_ID_AMDTEE)
};
static
const struct xlat tee_ioctl_impl_ids[1] = { {
 .data = tee_ioctl_impl_ids_xdata,
 .size = ARRAY_SIZE(tee_ioctl_impl_ids_xdata),
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
