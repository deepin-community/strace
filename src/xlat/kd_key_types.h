/* Generated by ./src/xlat/gen.sh from ./src/xlat/kd_key_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(KT_LATIN) || (defined(HAVE_DECL_KT_LATIN) && HAVE_DECL_KT_LATIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_LATIN) == (0), "KT_LATIN != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_LATIN 0
#endif
#if defined(KT_FN) || (defined(HAVE_DECL_KT_FN) && HAVE_DECL_KT_FN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_FN) == (1), "KT_FN != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_FN 1
#endif
#if defined(KT_SPEC) || (defined(HAVE_DECL_KT_SPEC) && HAVE_DECL_KT_SPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_SPEC) == (2), "KT_SPEC != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_SPEC 2
#endif
#if defined(KT_PAD) || (defined(HAVE_DECL_KT_PAD) && HAVE_DECL_KT_PAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_PAD) == (3), "KT_PAD != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_PAD 3
#endif
#if defined(KT_DEAD) || (defined(HAVE_DECL_KT_DEAD) && HAVE_DECL_KT_DEAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_DEAD) == (4), "KT_DEAD != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_DEAD 4
#endif
#if defined(KT_CONS) || (defined(HAVE_DECL_KT_CONS) && HAVE_DECL_KT_CONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_CONS) == (5), "KT_CONS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_CONS 5
#endif
#if defined(KT_CUR) || (defined(HAVE_DECL_KT_CUR) && HAVE_DECL_KT_CUR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_CUR) == (6), "KT_CUR != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_CUR 6
#endif
#if defined(KT_SHIFT) || (defined(HAVE_DECL_KT_SHIFT) && HAVE_DECL_KT_SHIFT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_SHIFT) == (7), "KT_SHIFT != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_SHIFT 7
#endif
#if defined(KT_META) || (defined(HAVE_DECL_KT_META) && HAVE_DECL_KT_META)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_META) == (8), "KT_META != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_META 8
#endif
#if defined(KT_ASCII) || (defined(HAVE_DECL_KT_ASCII) && HAVE_DECL_KT_ASCII)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_ASCII) == (9), "KT_ASCII != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_ASCII 9
#endif
#if defined(KT_LOCK) || (defined(HAVE_DECL_KT_LOCK) && HAVE_DECL_KT_LOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_LOCK) == (10), "KT_LOCK != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_LOCK 10
#endif
#if defined(KT_LETTER) || (defined(HAVE_DECL_KT_LETTER) && HAVE_DECL_KT_LETTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_LETTER) == (11), "KT_LETTER != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_LETTER 11
#endif
#if defined(KT_SLOCK) || (defined(HAVE_DECL_KT_SLOCK) && HAVE_DECL_KT_SLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_SLOCK) == (12), "KT_SLOCK != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_SLOCK 12
#endif
#if defined(KT_DEAD2) || (defined(HAVE_DECL_KT_DEAD2) && HAVE_DECL_KT_DEAD2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_DEAD2) == (13), "KT_DEAD2 != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_DEAD2 13
#endif
#if defined(KT_BRL) || (defined(HAVE_DECL_KT_BRL) && HAVE_DECL_KT_BRL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KT_BRL) == (14), "KT_BRL != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KT_BRL 14
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat kd_key_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data kd_key_types_xdata[] = {
 [KT_LATIN] = XLAT(KT_LATIN),
 #define XLAT_VAL_0 ((unsigned) (KT_LATIN))
 #define XLAT_STR_0 STRINGIFY(KT_LATIN)
 [KT_FN] = XLAT(KT_FN),
 #define XLAT_VAL_1 ((unsigned) (KT_FN))
 #define XLAT_STR_1 STRINGIFY(KT_FN)
 [KT_SPEC] = XLAT(KT_SPEC),
 #define XLAT_VAL_2 ((unsigned) (KT_SPEC))
 #define XLAT_STR_2 STRINGIFY(KT_SPEC)
 [KT_PAD] = XLAT(KT_PAD),
 #define XLAT_VAL_3 ((unsigned) (KT_PAD))
 #define XLAT_STR_3 STRINGIFY(KT_PAD)
 [KT_DEAD] = XLAT(KT_DEAD),
 #define XLAT_VAL_4 ((unsigned) (KT_DEAD))
 #define XLAT_STR_4 STRINGIFY(KT_DEAD)
 [KT_CONS] = XLAT(KT_CONS),
 #define XLAT_VAL_5 ((unsigned) (KT_CONS))
 #define XLAT_STR_5 STRINGIFY(KT_CONS)
 [KT_CUR] = XLAT(KT_CUR),
 #define XLAT_VAL_6 ((unsigned) (KT_CUR))
 #define XLAT_STR_6 STRINGIFY(KT_CUR)
 [KT_SHIFT] = XLAT(KT_SHIFT),
 #define XLAT_VAL_7 ((unsigned) (KT_SHIFT))
 #define XLAT_STR_7 STRINGIFY(KT_SHIFT)
 [KT_META] = XLAT(KT_META),
 #define XLAT_VAL_8 ((unsigned) (KT_META))
 #define XLAT_STR_8 STRINGIFY(KT_META)
 [KT_ASCII] = XLAT(KT_ASCII),
 #define XLAT_VAL_9 ((unsigned) (KT_ASCII))
 #define XLAT_STR_9 STRINGIFY(KT_ASCII)
 [KT_LOCK] = XLAT(KT_LOCK),
 #define XLAT_VAL_10 ((unsigned) (KT_LOCK))
 #define XLAT_STR_10 STRINGIFY(KT_LOCK)
 [KT_LETTER] = XLAT(KT_LETTER),
 #define XLAT_VAL_11 ((unsigned) (KT_LETTER))
 #define XLAT_STR_11 STRINGIFY(KT_LETTER)
 [KT_SLOCK] = XLAT(KT_SLOCK),
 #define XLAT_VAL_12 ((unsigned) (KT_SLOCK))
 #define XLAT_STR_12 STRINGIFY(KT_SLOCK)
 [KT_DEAD2] = XLAT(KT_DEAD2),
 #define XLAT_VAL_13 ((unsigned) (KT_DEAD2))
 #define XLAT_STR_13 STRINGIFY(KT_DEAD2)
 [KT_BRL] = XLAT(KT_BRL),
 #define XLAT_VAL_14 ((unsigned) (KT_BRL))
 #define XLAT_STR_14 STRINGIFY(KT_BRL)
};
static
const struct xlat kd_key_types[1] = { {
 .data = kd_key_types_xdata,
 .size = ARRAY_SIZE(kd_key_types_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
