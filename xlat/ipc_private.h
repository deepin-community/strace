/* Generated by ./xlat/gen.sh from ./xlat/ipc_private.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IPC_PRIVATE) || (defined(HAVE_DECL_IPC_PRIVATE) && HAVE_DECL_IPC_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_PRIVATE) == (0), "IPC_PRIVATE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_PRIVATE 0
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data ipc_private_xdata[] = {
 XLAT(IPC_PRIVATE),
 #define XLAT_VAL_0 ((unsigned) (IPC_PRIVATE))
 #define XLAT_STR_0 STRINGIFY(IPC_PRIVATE)
};
const struct xlat ipc_private[1] = { {
 .data = ipc_private_xdata,
 .size = ARRAY_SIZE(ipc_private_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */