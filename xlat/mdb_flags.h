/* Generated by ./xlat/gen.sh from ./xlat/mdb_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MDB_FLAGS_OFFLOAD) || (defined(HAVE_DECL_MDB_FLAGS_OFFLOAD) && HAVE_DECL_MDB_FLAGS_OFFLOAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MDB_FLAGS_OFFLOAD) == ((1 << 0)), "MDB_FLAGS_OFFLOAD != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MDB_FLAGS_OFFLOAD (1 << 0)
#endif
#if defined(MDB_FLAGS_FAST_LEAVE) || (defined(HAVE_DECL_MDB_FLAGS_FAST_LEAVE) && HAVE_DECL_MDB_FLAGS_FAST_LEAVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MDB_FLAGS_FAST_LEAVE) == ((1 << 1)), "MDB_FLAGS_FAST_LEAVE != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MDB_FLAGS_FAST_LEAVE (1 << 1)
#endif
#if defined(MDB_FLAGS_STAR_EXCL) || (defined(HAVE_DECL_MDB_FLAGS_STAR_EXCL) && HAVE_DECL_MDB_FLAGS_STAR_EXCL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MDB_FLAGS_STAR_EXCL) == ((1 << 2)), "MDB_FLAGS_STAR_EXCL != (1 << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MDB_FLAGS_STAR_EXCL (1 << 2)
#endif
#if defined(MDB_FLAGS_BLOCKED) || (defined(HAVE_DECL_MDB_FLAGS_BLOCKED) && HAVE_DECL_MDB_FLAGS_BLOCKED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MDB_FLAGS_BLOCKED) == ((1 << 3)), "MDB_FLAGS_BLOCKED != (1 << 3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MDB_FLAGS_BLOCKED (1 << 3)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mdb_flags in mpers mode

# else

static const struct xlat_data mdb_flags_xdata[] = {
 XLAT(MDB_FLAGS_OFFLOAD),
 #define XLAT_VAL_0 ((unsigned) (MDB_FLAGS_OFFLOAD))
 #define XLAT_STR_0 STRINGIFY(MDB_FLAGS_OFFLOAD)
 XLAT(MDB_FLAGS_FAST_LEAVE),
 #define XLAT_VAL_1 ((unsigned) (MDB_FLAGS_FAST_LEAVE))
 #define XLAT_STR_1 STRINGIFY(MDB_FLAGS_FAST_LEAVE)
 XLAT(MDB_FLAGS_STAR_EXCL),
 #define XLAT_VAL_2 ((unsigned) (MDB_FLAGS_STAR_EXCL))
 #define XLAT_STR_2 STRINGIFY(MDB_FLAGS_STAR_EXCL)
 XLAT(MDB_FLAGS_BLOCKED),
 #define XLAT_VAL_3 ((unsigned) (MDB_FLAGS_BLOCKED))
 #define XLAT_STR_3 STRINGIFY(MDB_FLAGS_BLOCKED)
};
static
const struct xlat mdb_flags[1] = { {
 .data = mdb_flags_xdata,
 .size = ARRAY_SIZE(mdb_flags_xdata),
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
