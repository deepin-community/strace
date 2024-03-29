/* Generated by ./src/xlat/gen.sh from ./src/xlat/kexec_arch_values.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat kexec_arch_values in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data kexec_arch_values_xdata[] = {
 XLAT(KEXEC_ARCH_DEFAULT),
 #define XLAT_VAL_0 ((unsigned) (KEXEC_ARCH_DEFAULT))
 #define XLAT_STR_0 STRINGIFY(KEXEC_ARCH_DEFAULT)
 XLAT(KEXEC_ARCH_386),
 #define XLAT_VAL_1 ((unsigned) (KEXEC_ARCH_386))
 #define XLAT_STR_1 STRINGIFY(KEXEC_ARCH_386)
 XLAT(KEXEC_ARCH_68K),
 #define XLAT_VAL_2 ((unsigned) (KEXEC_ARCH_68K))
 #define XLAT_STR_2 STRINGIFY(KEXEC_ARCH_68K)
 XLAT(KEXEC_ARCH_PARISC),
 #define XLAT_VAL_3 ((unsigned) (KEXEC_ARCH_PARISC))
 #define XLAT_STR_3 STRINGIFY(KEXEC_ARCH_PARISC)
 XLAT(KEXEC_ARCH_X86_64),
 #define XLAT_VAL_4 ((unsigned) (KEXEC_ARCH_X86_64))
 #define XLAT_STR_4 STRINGIFY(KEXEC_ARCH_X86_64)
 XLAT(KEXEC_ARCH_PPC),
 #define XLAT_VAL_5 ((unsigned) (KEXEC_ARCH_PPC))
 #define XLAT_STR_5 STRINGIFY(KEXEC_ARCH_PPC)
 XLAT(KEXEC_ARCH_PPC64),
 #define XLAT_VAL_6 ((unsigned) (KEXEC_ARCH_PPC64))
 #define XLAT_STR_6 STRINGIFY(KEXEC_ARCH_PPC64)
 XLAT(KEXEC_ARCH_IA_64),
 #define XLAT_VAL_7 ((unsigned) (KEXEC_ARCH_IA_64))
 #define XLAT_STR_7 STRINGIFY(KEXEC_ARCH_IA_64)
 XLAT(KEXEC_ARCH_ARM),
 #define XLAT_VAL_8 ((unsigned) (KEXEC_ARCH_ARM))
 #define XLAT_STR_8 STRINGIFY(KEXEC_ARCH_ARM)
 XLAT(KEXEC_ARCH_S390),
 #define XLAT_VAL_9 ((unsigned) (KEXEC_ARCH_S390))
 #define XLAT_STR_9 STRINGIFY(KEXEC_ARCH_S390)
 XLAT(KEXEC_ARCH_SH),
 #define XLAT_VAL_10 ((unsigned) (KEXEC_ARCH_SH))
 #define XLAT_STR_10 STRINGIFY(KEXEC_ARCH_SH)
 XLAT(KEXEC_ARCH_MIPS_LE),
 #define XLAT_VAL_11 ((unsigned) (KEXEC_ARCH_MIPS_LE))
 #define XLAT_STR_11 STRINGIFY(KEXEC_ARCH_MIPS_LE)
 XLAT(KEXEC_ARCH_MIPS),
 #define XLAT_VAL_12 ((unsigned) (KEXEC_ARCH_MIPS))
 #define XLAT_STR_12 STRINGIFY(KEXEC_ARCH_MIPS)
 XLAT(KEXEC_ARCH_AARCH64),
 #define XLAT_VAL_13 ((unsigned) (KEXEC_ARCH_AARCH64))
 #define XLAT_STR_13 STRINGIFY(KEXEC_ARCH_AARCH64)
 XLAT(KEXEC_ARCH_RISCV),
 #define XLAT_VAL_14 ((unsigned) (KEXEC_ARCH_RISCV))
 #define XLAT_STR_14 STRINGIFY(KEXEC_ARCH_RISCV)
 XLAT(KEXEC_ARCH_LOONGARCH),
 #define XLAT_VAL_15 ((unsigned) (KEXEC_ARCH_LOONGARCH))
 #define XLAT_STR_15 STRINGIFY(KEXEC_ARCH_LOONGARCH)
};
static
const struct xlat kexec_arch_values[1] = { {
 .data = kexec_arch_values_xdata,
 .size = ARRAY_SIZE(kexec_arch_values_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
