/* Generated by ./xlat/gen.sh from ./xlat/mtd_file_mode_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat mtd_file_mode_options[];

# else

static const struct xlat_data mtd_file_mode_options_xdata[] = {
 [MTD_FILE_MODE_NORMAL] = XLAT(MTD_FILE_MODE_NORMAL),
 #define XLAT_VAL_0 ((unsigned) (MTD_FILE_MODE_NORMAL))
 #define XLAT_STR_0 STRINGIFY(MTD_FILE_MODE_NORMAL)
 [MTD_FILE_MODE_OTP_FACTORY] = XLAT(MTD_FILE_MODE_OTP_FACTORY),
 #define XLAT_VAL_1 ((unsigned) (MTD_FILE_MODE_OTP_FACTORY))
 #define XLAT_STR_1 STRINGIFY(MTD_FILE_MODE_OTP_FACTORY)
 [MTD_FILE_MODE_OTP_USER] = XLAT(MTD_FILE_MODE_OTP_USER),
 #define XLAT_VAL_2 ((unsigned) (MTD_FILE_MODE_OTP_USER))
 #define XLAT_STR_2 STRINGIFY(MTD_FILE_MODE_OTP_USER)
 [MTD_FILE_MODE_RAW] = XLAT(MTD_FILE_MODE_RAW),
 #define XLAT_VAL_3 ((unsigned) (MTD_FILE_MODE_RAW))
 #define XLAT_STR_3 STRINGIFY(MTD_FILE_MODE_RAW)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat mtd_file_mode_options[1] = { {
 .data = mtd_file_mode_options_xdata,
 .size = ARRAY_SIZE(mtd_file_mode_options_xdata),
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
