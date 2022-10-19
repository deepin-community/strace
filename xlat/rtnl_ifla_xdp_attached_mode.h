/* Generated by ./xlat/gen.sh from ./xlat/rtnl_ifla_xdp_attached_mode.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(XDP_ATTACHED_NONE) || (defined(HAVE_DECL_XDP_ATTACHED_NONE) && HAVE_DECL_XDP_ATTACHED_NONE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XDP_ATTACHED_NONE) == (0), "XDP_ATTACHED_NONE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XDP_ATTACHED_NONE 0
#endif
#if defined(XDP_ATTACHED_DRV) || (defined(HAVE_DECL_XDP_ATTACHED_DRV) && HAVE_DECL_XDP_ATTACHED_DRV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XDP_ATTACHED_DRV) == (1), "XDP_ATTACHED_DRV != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XDP_ATTACHED_DRV 1
#endif
#if defined(XDP_ATTACHED_SKB) || (defined(HAVE_DECL_XDP_ATTACHED_SKB) && HAVE_DECL_XDP_ATTACHED_SKB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XDP_ATTACHED_SKB) == (2), "XDP_ATTACHED_SKB != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XDP_ATTACHED_SKB 2
#endif
#if defined(XDP_ATTACHED_HW) || (defined(HAVE_DECL_XDP_ATTACHED_HW) && HAVE_DECL_XDP_ATTACHED_HW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XDP_ATTACHED_HW) == (3), "XDP_ATTACHED_HW != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XDP_ATTACHED_HW 3
#endif
#if defined(XDP_ATTACHED_MULTI) || (defined(HAVE_DECL_XDP_ATTACHED_MULTI) && HAVE_DECL_XDP_ATTACHED_MULTI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XDP_ATTACHED_MULTI) == (4), "XDP_ATTACHED_MULTI != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XDP_ATTACHED_MULTI 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_xdp_attached_mode in mpers mode

# else

static const struct xlat_data rtnl_ifla_xdp_attached_mode_xdata[] = {
 [XDP_ATTACHED_NONE] = XLAT(XDP_ATTACHED_NONE),
 #define XLAT_VAL_0 ((unsigned) (XDP_ATTACHED_NONE))
 #define XLAT_STR_0 STRINGIFY(XDP_ATTACHED_NONE)
 [XDP_ATTACHED_DRV] = XLAT(XDP_ATTACHED_DRV),
 #define XLAT_VAL_1 ((unsigned) (XDP_ATTACHED_DRV))
 #define XLAT_STR_1 STRINGIFY(XDP_ATTACHED_DRV)
 [XDP_ATTACHED_SKB] = XLAT(XDP_ATTACHED_SKB),
 #define XLAT_VAL_2 ((unsigned) (XDP_ATTACHED_SKB))
 #define XLAT_STR_2 STRINGIFY(XDP_ATTACHED_SKB)
 [XDP_ATTACHED_HW] = XLAT(XDP_ATTACHED_HW),
 #define XLAT_VAL_3 ((unsigned) (XDP_ATTACHED_HW))
 #define XLAT_STR_3 STRINGIFY(XDP_ATTACHED_HW)
 [XDP_ATTACHED_MULTI] = XLAT(XDP_ATTACHED_MULTI),
 #define XLAT_VAL_4 ((unsigned) (XDP_ATTACHED_MULTI))
 #define XLAT_STR_4 STRINGIFY(XDP_ATTACHED_MULTI)
};
static
const struct xlat rtnl_ifla_xdp_attached_mode[1] = { {
 .data = rtnl_ifla_xdp_attached_mode_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_xdp_attached_mode_xdata),
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