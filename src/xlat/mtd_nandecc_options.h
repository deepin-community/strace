/* Generated by ./src/xlat/gen.sh from ./src/xlat/mtd_nandecc_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat mtd_nandecc_options[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data mtd_nandecc_options_xdata[] = {
 [MTD_NANDECC_OFF] = XLAT(MTD_NANDECC_OFF),
 #define XLAT_VAL_0 ((unsigned) (MTD_NANDECC_OFF))
 #define XLAT_STR_0 STRINGIFY(MTD_NANDECC_OFF)
 [MTD_NANDECC_PLACE] = XLAT(MTD_NANDECC_PLACE),
 #define XLAT_VAL_1 ((unsigned) (MTD_NANDECC_PLACE))
 #define XLAT_STR_1 STRINGIFY(MTD_NANDECC_PLACE)
 [MTD_NANDECC_AUTOPLACE] = XLAT(MTD_NANDECC_AUTOPLACE),
 #define XLAT_VAL_2 ((unsigned) (MTD_NANDECC_AUTOPLACE))
 #define XLAT_STR_2 STRINGIFY(MTD_NANDECC_AUTOPLACE)
 [MTD_NANDECC_PLACEONLY] = XLAT(MTD_NANDECC_PLACEONLY),
 #define XLAT_VAL_3 ((unsigned) (MTD_NANDECC_PLACEONLY))
 #define XLAT_STR_3 STRINGIFY(MTD_NANDECC_PLACEONLY)
 [MTD_NANDECC_AUTOPL_USR] = XLAT(MTD_NANDECC_AUTOPL_USR),
 #define XLAT_VAL_4 ((unsigned) (MTD_NANDECC_AUTOPL_USR))
 #define XLAT_STR_4 STRINGIFY(MTD_NANDECC_AUTOPL_USR)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat mtd_nandecc_options[1] = { {
 .data = mtd_nandecc_options_xdata,
 .size = ARRAY_SIZE(mtd_nandecc_options_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
