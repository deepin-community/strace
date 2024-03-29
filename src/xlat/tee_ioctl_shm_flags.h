/* Generated by ./src/xlat/gen.sh from ./src/xlat/tee_ioctl_shm_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TEE_IOCTL_SHM_MAPPED) || (defined(HAVE_DECL_TEE_IOCTL_SHM_MAPPED) && HAVE_DECL_TEE_IOCTL_SHM_MAPPED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TEE_IOCTL_SHM_MAPPED) == (0x1), "TEE_IOCTL_SHM_MAPPED != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TEE_IOCTL_SHM_MAPPED 0x1
#endif
#if defined(TEE_IOCTL_SHM_DMA_BUF) || (defined(HAVE_DECL_TEE_IOCTL_SHM_DMA_BUF) && HAVE_DECL_TEE_IOCTL_SHM_DMA_BUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TEE_IOCTL_SHM_DMA_BUF) == (0x2), "TEE_IOCTL_SHM_DMA_BUF != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TEE_IOCTL_SHM_DMA_BUF 0x2
#endif
#if defined(TEE_IOCTL_SHM_EXT_DMA_BUF) || (defined(HAVE_DECL_TEE_IOCTL_SHM_EXT_DMA_BUF) && HAVE_DECL_TEE_IOCTL_SHM_EXT_DMA_BUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TEE_IOCTL_SHM_EXT_DMA_BUF) == (0x4), "TEE_IOCTL_SHM_EXT_DMA_BUF != 0x4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TEE_IOCTL_SHM_EXT_DMA_BUF 0x4
#endif
#if defined(TEE_IOCTL_SHM_REGISTER) || (defined(HAVE_DECL_TEE_IOCTL_SHM_REGISTER) && HAVE_DECL_TEE_IOCTL_SHM_REGISTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TEE_IOCTL_SHM_REGISTER) == (0x8), "TEE_IOCTL_SHM_REGISTER != 0x8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TEE_IOCTL_SHM_REGISTER 0x8
#endif
#if defined(TEE_IOCTL_SHM_USER_MAPPED) || (defined(HAVE_DECL_TEE_IOCTL_SHM_USER_MAPPED) && HAVE_DECL_TEE_IOCTL_SHM_USER_MAPPED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TEE_IOCTL_SHM_USER_MAPPED) == (0x10), "TEE_IOCTL_SHM_USER_MAPPED != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TEE_IOCTL_SHM_USER_MAPPED 0x10
#endif
#if defined(TEE_IOCTL_SHM_POOL) || (defined(HAVE_DECL_TEE_IOCTL_SHM_POOL) && HAVE_DECL_TEE_IOCTL_SHM_POOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TEE_IOCTL_SHM_POOL) == (0x20), "TEE_IOCTL_SHM_POOL != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TEE_IOCTL_SHM_POOL 0x20
#endif
#if defined(TEE_IOCTL_SHM_KERNEL_MAPPED) || (defined(HAVE_DECL_TEE_IOCTL_SHM_KERNEL_MAPPED) && HAVE_DECL_TEE_IOCTL_SHM_KERNEL_MAPPED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TEE_IOCTL_SHM_KERNEL_MAPPED) == (0x40), "TEE_IOCTL_SHM_KERNEL_MAPPED != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TEE_IOCTL_SHM_KERNEL_MAPPED 0x40
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat tee_ioctl_shm_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data tee_ioctl_shm_flags_xdata[] = {

 XLAT(TEE_IOCTL_SHM_MAPPED),
 #define XLAT_VAL_0 ((unsigned) (TEE_IOCTL_SHM_MAPPED))
 #define XLAT_STR_0 STRINGIFY(TEE_IOCTL_SHM_MAPPED)
 XLAT(TEE_IOCTL_SHM_DMA_BUF),
 #define XLAT_VAL_1 ((unsigned) (TEE_IOCTL_SHM_DMA_BUF))
 #define XLAT_STR_1 STRINGIFY(TEE_IOCTL_SHM_DMA_BUF)
 XLAT(TEE_IOCTL_SHM_EXT_DMA_BUF),
 #define XLAT_VAL_2 ((unsigned) (TEE_IOCTL_SHM_EXT_DMA_BUF))
 #define XLAT_STR_2 STRINGIFY(TEE_IOCTL_SHM_EXT_DMA_BUF)
 XLAT(TEE_IOCTL_SHM_REGISTER),
 #define XLAT_VAL_3 ((unsigned) (TEE_IOCTL_SHM_REGISTER))
 #define XLAT_STR_3 STRINGIFY(TEE_IOCTL_SHM_REGISTER)
 XLAT(TEE_IOCTL_SHM_USER_MAPPED),
 #define XLAT_VAL_4 ((unsigned) (TEE_IOCTL_SHM_USER_MAPPED))
 #define XLAT_STR_4 STRINGIFY(TEE_IOCTL_SHM_USER_MAPPED)
 XLAT(TEE_IOCTL_SHM_POOL),
 #define XLAT_VAL_5 ((unsigned) (TEE_IOCTL_SHM_POOL))
 #define XLAT_STR_5 STRINGIFY(TEE_IOCTL_SHM_POOL)
 XLAT(TEE_IOCTL_SHM_KERNEL_MAPPED),
 #define XLAT_VAL_6 ((unsigned) (TEE_IOCTL_SHM_KERNEL_MAPPED))
 #define XLAT_STR_6 STRINGIFY(TEE_IOCTL_SHM_KERNEL_MAPPED)
};
static
const struct xlat tee_ioctl_shm_flags[1] = { {
 .data = tee_ioctl_shm_flags_xdata,
 .size = ARRAY_SIZE(tee_ioctl_shm_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
