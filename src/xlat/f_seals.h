/* Generated by ./src/xlat/gen.sh from ./src/xlat/f_seals.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat f_seals in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data f_seals_xdata[] = {
 XLAT(F_SEAL_SEAL),
 #define XLAT_VAL_0 ((unsigned) (F_SEAL_SEAL))
 #define XLAT_STR_0 STRINGIFY(F_SEAL_SEAL)
 XLAT(F_SEAL_SHRINK),
 #define XLAT_VAL_1 ((unsigned) (F_SEAL_SHRINK))
 #define XLAT_STR_1 STRINGIFY(F_SEAL_SHRINK)
 XLAT(F_SEAL_GROW),
 #define XLAT_VAL_2 ((unsigned) (F_SEAL_GROW))
 #define XLAT_STR_2 STRINGIFY(F_SEAL_GROW)
 XLAT(F_SEAL_WRITE),
 #define XLAT_VAL_3 ((unsigned) (F_SEAL_WRITE))
 #define XLAT_STR_3 STRINGIFY(F_SEAL_WRITE)
 XLAT(F_SEAL_FUTURE_WRITE),
 #define XLAT_VAL_4 ((unsigned) (F_SEAL_FUTURE_WRITE))
 #define XLAT_STR_4 STRINGIFY(F_SEAL_FUTURE_WRITE)
 XLAT(F_SEAL_EXEC),
 #define XLAT_VAL_5 ((unsigned) (F_SEAL_EXEC))
 #define XLAT_STR_5 STRINGIFY(F_SEAL_EXEC)
};
static
const struct xlat f_seals[1] = { {
 .data = f_seals_xdata,
 .size = ARRAY_SIZE(f_seals_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
