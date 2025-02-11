/* Generated by ./src/xlat/gen.sh from ./src/xlat/sock_tcp_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TCP_NODELAY) || (defined(HAVE_DECL_TCP_NODELAY) && HAVE_DECL_TCP_NODELAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_NODELAY) == (1), "TCP_NODELAY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_NODELAY 1
#endif
#if defined(TCP_MAXSEG) || (defined(HAVE_DECL_TCP_MAXSEG) && HAVE_DECL_TCP_MAXSEG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_MAXSEG) == (2), "TCP_MAXSEG != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_MAXSEG 2
#endif
#if defined(TCP_CORK) || (defined(HAVE_DECL_TCP_CORK) && HAVE_DECL_TCP_CORK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_CORK) == (3), "TCP_CORK != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_CORK 3
#endif
#if defined(TCP_KEEPIDLE) || (defined(HAVE_DECL_TCP_KEEPIDLE) && HAVE_DECL_TCP_KEEPIDLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_KEEPIDLE) == (4), "TCP_KEEPIDLE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_KEEPIDLE 4
#endif
#if defined(TCP_KEEPINTVL) || (defined(HAVE_DECL_TCP_KEEPINTVL) && HAVE_DECL_TCP_KEEPINTVL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_KEEPINTVL) == (5), "TCP_KEEPINTVL != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_KEEPINTVL 5
#endif
#if defined(TCP_KEEPCNT) || (defined(HAVE_DECL_TCP_KEEPCNT) && HAVE_DECL_TCP_KEEPCNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_KEEPCNT) == (6), "TCP_KEEPCNT != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_KEEPCNT 6
#endif
#if defined(TCP_SYNCNT) || (defined(HAVE_DECL_TCP_SYNCNT) && HAVE_DECL_TCP_SYNCNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_SYNCNT) == (7), "TCP_SYNCNT != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_SYNCNT 7
#endif
#if defined(TCP_LINGER2) || (defined(HAVE_DECL_TCP_LINGER2) && HAVE_DECL_TCP_LINGER2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_LINGER2) == (8), "TCP_LINGER2 != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_LINGER2 8
#endif
#if defined(TCP_DEFER_ACCEPT) || (defined(HAVE_DECL_TCP_DEFER_ACCEPT) && HAVE_DECL_TCP_DEFER_ACCEPT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_DEFER_ACCEPT) == (9), "TCP_DEFER_ACCEPT != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_DEFER_ACCEPT 9
#endif
#if defined(TCP_WINDOW_CLAMP) || (defined(HAVE_DECL_TCP_WINDOW_CLAMP) && HAVE_DECL_TCP_WINDOW_CLAMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_WINDOW_CLAMP) == (10), "TCP_WINDOW_CLAMP != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_WINDOW_CLAMP 10
#endif
#if defined(TCP_INFO) || (defined(HAVE_DECL_TCP_INFO) && HAVE_DECL_TCP_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_INFO) == (11), "TCP_INFO != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_INFO 11
#endif
#if defined(TCP_QUICKACK) || (defined(HAVE_DECL_TCP_QUICKACK) && HAVE_DECL_TCP_QUICKACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_QUICKACK) == (12), "TCP_QUICKACK != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_QUICKACK 12
#endif
#if defined(TCP_CONGESTION) || (defined(HAVE_DECL_TCP_CONGESTION) && HAVE_DECL_TCP_CONGESTION)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_CONGESTION) == (13), "TCP_CONGESTION != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_CONGESTION 13
#endif
#if defined(TCP_MD5SIG) || (defined(HAVE_DECL_TCP_MD5SIG) && HAVE_DECL_TCP_MD5SIG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_MD5SIG) == (14), "TCP_MD5SIG != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_MD5SIG 14
#endif
#if defined(TCP_COOKIE_TRANSACTIONS) || (defined(HAVE_DECL_TCP_COOKIE_TRANSACTIONS) && HAVE_DECL_TCP_COOKIE_TRANSACTIONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_COOKIE_TRANSACTIONS) == (15), "TCP_COOKIE_TRANSACTIONS != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_COOKIE_TRANSACTIONS 15
#endif
#if defined(TCP_THIN_LINEAR_TIMEOUTS) || (defined(HAVE_DECL_TCP_THIN_LINEAR_TIMEOUTS) && HAVE_DECL_TCP_THIN_LINEAR_TIMEOUTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_THIN_LINEAR_TIMEOUTS) == (16), "TCP_THIN_LINEAR_TIMEOUTS != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_THIN_LINEAR_TIMEOUTS 16
#endif
#if defined(TCP_THIN_DUPACK) || (defined(HAVE_DECL_TCP_THIN_DUPACK) && HAVE_DECL_TCP_THIN_DUPACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_THIN_DUPACK) == (17), "TCP_THIN_DUPACK != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_THIN_DUPACK 17
#endif
#if defined(TCP_USER_TIMEOUT) || (defined(HAVE_DECL_TCP_USER_TIMEOUT) && HAVE_DECL_TCP_USER_TIMEOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_USER_TIMEOUT) == (18), "TCP_USER_TIMEOUT != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_USER_TIMEOUT 18
#endif
#if defined(TCP_REPAIR) || (defined(HAVE_DECL_TCP_REPAIR) && HAVE_DECL_TCP_REPAIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_REPAIR) == (19), "TCP_REPAIR != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_REPAIR 19
#endif
#if defined(TCP_REPAIR_QUEUE) || (defined(HAVE_DECL_TCP_REPAIR_QUEUE) && HAVE_DECL_TCP_REPAIR_QUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_REPAIR_QUEUE) == (20), "TCP_REPAIR_QUEUE != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_REPAIR_QUEUE 20
#endif
#if defined(TCP_QUEUE_SEQ) || (defined(HAVE_DECL_TCP_QUEUE_SEQ) && HAVE_DECL_TCP_QUEUE_SEQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_QUEUE_SEQ) == (21), "TCP_QUEUE_SEQ != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_QUEUE_SEQ 21
#endif
#if defined(TCP_REPAIR_OPTIONS) || (defined(HAVE_DECL_TCP_REPAIR_OPTIONS) && HAVE_DECL_TCP_REPAIR_OPTIONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_REPAIR_OPTIONS) == (22), "TCP_REPAIR_OPTIONS != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_REPAIR_OPTIONS 22
#endif
#if defined(TCP_FASTOPEN) || (defined(HAVE_DECL_TCP_FASTOPEN) && HAVE_DECL_TCP_FASTOPEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_FASTOPEN) == (23), "TCP_FASTOPEN != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_FASTOPEN 23
#endif
#if defined(TCP_TIMESTAMP) || (defined(HAVE_DECL_TCP_TIMESTAMP) && HAVE_DECL_TCP_TIMESTAMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_TIMESTAMP) == (24), "TCP_TIMESTAMP != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_TIMESTAMP 24
#endif
#if defined(TCP_NOTSENT_LOWAT) || (defined(HAVE_DECL_TCP_NOTSENT_LOWAT) && HAVE_DECL_TCP_NOTSENT_LOWAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_NOTSENT_LOWAT) == (25), "TCP_NOTSENT_LOWAT != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_NOTSENT_LOWAT 25
#endif
#if defined(TCP_CC_INFO) || (defined(HAVE_DECL_TCP_CC_INFO) && HAVE_DECL_TCP_CC_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_CC_INFO) == (26), "TCP_CC_INFO != 26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_CC_INFO 26
#endif
#if defined(TCP_SAVE_SYN) || (defined(HAVE_DECL_TCP_SAVE_SYN) && HAVE_DECL_TCP_SAVE_SYN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_SAVE_SYN) == (27), "TCP_SAVE_SYN != 27");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_SAVE_SYN 27
#endif
#if defined(TCP_SAVED_SYN) || (defined(HAVE_DECL_TCP_SAVED_SYN) && HAVE_DECL_TCP_SAVED_SYN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_SAVED_SYN) == (28), "TCP_SAVED_SYN != 28");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_SAVED_SYN 28
#endif
#if defined(TCP_REPAIR_WINDOW) || (defined(HAVE_DECL_TCP_REPAIR_WINDOW) && HAVE_DECL_TCP_REPAIR_WINDOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_REPAIR_WINDOW) == (29), "TCP_REPAIR_WINDOW != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_REPAIR_WINDOW 29
#endif
#if defined(TCP_FASTOPEN_CONNECT) || (defined(HAVE_DECL_TCP_FASTOPEN_CONNECT) && HAVE_DECL_TCP_FASTOPEN_CONNECT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_FASTOPEN_CONNECT) == (30), "TCP_FASTOPEN_CONNECT != 30");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_FASTOPEN_CONNECT 30
#endif
#if defined(TCP_ULP) || (defined(HAVE_DECL_TCP_ULP) && HAVE_DECL_TCP_ULP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_ULP) == (31), "TCP_ULP != 31");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_ULP 31
#endif
#if defined(TCP_MD5SIG_EXT) || (defined(HAVE_DECL_TCP_MD5SIG_EXT) && HAVE_DECL_TCP_MD5SIG_EXT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_MD5SIG_EXT) == (32), "TCP_MD5SIG_EXT != 32");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_MD5SIG_EXT 32
#endif
#if defined(TCP_FASTOPEN_KEY) || (defined(HAVE_DECL_TCP_FASTOPEN_KEY) && HAVE_DECL_TCP_FASTOPEN_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_FASTOPEN_KEY) == (33), "TCP_FASTOPEN_KEY != 33");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_FASTOPEN_KEY 33
#endif
#if defined(TCP_FASTOPEN_NO_COOKIE) || (defined(HAVE_DECL_TCP_FASTOPEN_NO_COOKIE) && HAVE_DECL_TCP_FASTOPEN_NO_COOKIE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_FASTOPEN_NO_COOKIE) == (34), "TCP_FASTOPEN_NO_COOKIE != 34");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_FASTOPEN_NO_COOKIE 34
#endif
#if defined(TCP_ZEROCOPY_RECEIVE) || (defined(HAVE_DECL_TCP_ZEROCOPY_RECEIVE) && HAVE_DECL_TCP_ZEROCOPY_RECEIVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_ZEROCOPY_RECEIVE) == (35), "TCP_ZEROCOPY_RECEIVE != 35");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_ZEROCOPY_RECEIVE 35
#endif
#if defined(TCP_INQ) || (defined(HAVE_DECL_TCP_INQ) && HAVE_DECL_TCP_INQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_INQ) == (36), "TCP_INQ != 36");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_INQ 36
#endif
#if defined(TCP_TX_DELAY) || (defined(HAVE_DECL_TCP_TX_DELAY) && HAVE_DECL_TCP_TX_DELAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_TX_DELAY) == (37), "TCP_TX_DELAY != 37");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_TX_DELAY 37
#endif
#if defined(TCP_AO_ADD_KEY) || (defined(HAVE_DECL_TCP_AO_ADD_KEY) && HAVE_DECL_TCP_AO_ADD_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_AO_ADD_KEY) == (38), "TCP_AO_ADD_KEY != 38");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_AO_ADD_KEY 38
#endif
#if defined(TCP_AO_DEL_KEY) || (defined(HAVE_DECL_TCP_AO_DEL_KEY) && HAVE_DECL_TCP_AO_DEL_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_AO_DEL_KEY) == (39), "TCP_AO_DEL_KEY != 39");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_AO_DEL_KEY 39
#endif
#if defined(TCP_AO_INFO) || (defined(HAVE_DECL_TCP_AO_INFO) && HAVE_DECL_TCP_AO_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_AO_INFO) == (40), "TCP_AO_INFO != 40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_AO_INFO 40
#endif
#if defined(TCP_AO_GET_KEYS) || (defined(HAVE_DECL_TCP_AO_GET_KEYS) && HAVE_DECL_TCP_AO_GET_KEYS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_AO_GET_KEYS) == (41), "TCP_AO_GET_KEYS != 41");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_AO_GET_KEYS 41
#endif
#if defined(TCP_AO_REPAIR) || (defined(HAVE_DECL_TCP_AO_REPAIR) && HAVE_DECL_TCP_AO_REPAIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_AO_REPAIR) == (42), "TCP_AO_REPAIR != 42");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_AO_REPAIR 42
#endif
#if defined(TCP_IS_MPTCP) || (defined(HAVE_DECL_TCP_IS_MPTCP) && HAVE_DECL_TCP_IS_MPTCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_IS_MPTCP) == (43), "TCP_IS_MPTCP != 43");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_IS_MPTCP 43
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_tcp_options in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sock_tcp_options_xdata[] = {
 [TCP_NODELAY] = XLAT(TCP_NODELAY),
 #define XLAT_VAL_0 ((unsigned) (TCP_NODELAY))
 #define XLAT_STR_0 STRINGIFY(TCP_NODELAY)
 [TCP_MAXSEG] = XLAT(TCP_MAXSEG),
 #define XLAT_VAL_1 ((unsigned) (TCP_MAXSEG))
 #define XLAT_STR_1 STRINGIFY(TCP_MAXSEG)
 [TCP_CORK] = XLAT(TCP_CORK),
 #define XLAT_VAL_2 ((unsigned) (TCP_CORK))
 #define XLAT_STR_2 STRINGIFY(TCP_CORK)
 [TCP_KEEPIDLE] = XLAT(TCP_KEEPIDLE),
 #define XLAT_VAL_3 ((unsigned) (TCP_KEEPIDLE))
 #define XLAT_STR_3 STRINGIFY(TCP_KEEPIDLE)
 [TCP_KEEPINTVL] = XLAT(TCP_KEEPINTVL),
 #define XLAT_VAL_4 ((unsigned) (TCP_KEEPINTVL))
 #define XLAT_STR_4 STRINGIFY(TCP_KEEPINTVL)
 [TCP_KEEPCNT] = XLAT(TCP_KEEPCNT),
 #define XLAT_VAL_5 ((unsigned) (TCP_KEEPCNT))
 #define XLAT_STR_5 STRINGIFY(TCP_KEEPCNT)
 [TCP_SYNCNT] = XLAT(TCP_SYNCNT),
 #define XLAT_VAL_6 ((unsigned) (TCP_SYNCNT))
 #define XLAT_STR_6 STRINGIFY(TCP_SYNCNT)
 [TCP_LINGER2] = XLAT(TCP_LINGER2),
 #define XLAT_VAL_7 ((unsigned) (TCP_LINGER2))
 #define XLAT_STR_7 STRINGIFY(TCP_LINGER2)
 [TCP_DEFER_ACCEPT] = XLAT(TCP_DEFER_ACCEPT),
 #define XLAT_VAL_8 ((unsigned) (TCP_DEFER_ACCEPT))
 #define XLAT_STR_8 STRINGIFY(TCP_DEFER_ACCEPT)
 [TCP_WINDOW_CLAMP] = XLAT(TCP_WINDOW_CLAMP),
 #define XLAT_VAL_9 ((unsigned) (TCP_WINDOW_CLAMP))
 #define XLAT_STR_9 STRINGIFY(TCP_WINDOW_CLAMP)
 [TCP_INFO] = XLAT(TCP_INFO),
 #define XLAT_VAL_10 ((unsigned) (TCP_INFO))
 #define XLAT_STR_10 STRINGIFY(TCP_INFO)
 [TCP_QUICKACK] = XLAT(TCP_QUICKACK),
 #define XLAT_VAL_11 ((unsigned) (TCP_QUICKACK))
 #define XLAT_STR_11 STRINGIFY(TCP_QUICKACK)
 [TCP_CONGESTION] = XLAT(TCP_CONGESTION),
 #define XLAT_VAL_12 ((unsigned) (TCP_CONGESTION))
 #define XLAT_STR_12 STRINGIFY(TCP_CONGESTION)
 [TCP_MD5SIG] = XLAT(TCP_MD5SIG),
 #define XLAT_VAL_13 ((unsigned) (TCP_MD5SIG))
 #define XLAT_STR_13 STRINGIFY(TCP_MD5SIG)
 [TCP_COOKIE_TRANSACTIONS] = XLAT(TCP_COOKIE_TRANSACTIONS),
 #define XLAT_VAL_14 ((unsigned) (TCP_COOKIE_TRANSACTIONS))
 #define XLAT_STR_14 STRINGIFY(TCP_COOKIE_TRANSACTIONS)
 [TCP_THIN_LINEAR_TIMEOUTS] = XLAT(TCP_THIN_LINEAR_TIMEOUTS),
 #define XLAT_VAL_15 ((unsigned) (TCP_THIN_LINEAR_TIMEOUTS))
 #define XLAT_STR_15 STRINGIFY(TCP_THIN_LINEAR_TIMEOUTS)
 [TCP_THIN_DUPACK] = XLAT(TCP_THIN_DUPACK),
 #define XLAT_VAL_16 ((unsigned) (TCP_THIN_DUPACK))
 #define XLAT_STR_16 STRINGIFY(TCP_THIN_DUPACK)
 [TCP_USER_TIMEOUT] = XLAT(TCP_USER_TIMEOUT),
 #define XLAT_VAL_17 ((unsigned) (TCP_USER_TIMEOUT))
 #define XLAT_STR_17 STRINGIFY(TCP_USER_TIMEOUT)
 [TCP_REPAIR] = XLAT(TCP_REPAIR),
 #define XLAT_VAL_18 ((unsigned) (TCP_REPAIR))
 #define XLAT_STR_18 STRINGIFY(TCP_REPAIR)
 [TCP_REPAIR_QUEUE] = XLAT(TCP_REPAIR_QUEUE),
 #define XLAT_VAL_19 ((unsigned) (TCP_REPAIR_QUEUE))
 #define XLAT_STR_19 STRINGIFY(TCP_REPAIR_QUEUE)
 [TCP_QUEUE_SEQ] = XLAT(TCP_QUEUE_SEQ),
 #define XLAT_VAL_20 ((unsigned) (TCP_QUEUE_SEQ))
 #define XLAT_STR_20 STRINGIFY(TCP_QUEUE_SEQ)
 [TCP_REPAIR_OPTIONS] = XLAT(TCP_REPAIR_OPTIONS),
 #define XLAT_VAL_21 ((unsigned) (TCP_REPAIR_OPTIONS))
 #define XLAT_STR_21 STRINGIFY(TCP_REPAIR_OPTIONS)
 [TCP_FASTOPEN] = XLAT(TCP_FASTOPEN),
 #define XLAT_VAL_22 ((unsigned) (TCP_FASTOPEN))
 #define XLAT_STR_22 STRINGIFY(TCP_FASTOPEN)
 [TCP_TIMESTAMP] = XLAT(TCP_TIMESTAMP),
 #define XLAT_VAL_23 ((unsigned) (TCP_TIMESTAMP))
 #define XLAT_STR_23 STRINGIFY(TCP_TIMESTAMP)
 [TCP_NOTSENT_LOWAT] = XLAT(TCP_NOTSENT_LOWAT),
 #define XLAT_VAL_24 ((unsigned) (TCP_NOTSENT_LOWAT))
 #define XLAT_STR_24 STRINGIFY(TCP_NOTSENT_LOWAT)
 [TCP_CC_INFO] = XLAT(TCP_CC_INFO),
 #define XLAT_VAL_25 ((unsigned) (TCP_CC_INFO))
 #define XLAT_STR_25 STRINGIFY(TCP_CC_INFO)
 [TCP_SAVE_SYN] = XLAT(TCP_SAVE_SYN),
 #define XLAT_VAL_26 ((unsigned) (TCP_SAVE_SYN))
 #define XLAT_STR_26 STRINGIFY(TCP_SAVE_SYN)
 [TCP_SAVED_SYN] = XLAT(TCP_SAVED_SYN),
 #define XLAT_VAL_27 ((unsigned) (TCP_SAVED_SYN))
 #define XLAT_STR_27 STRINGIFY(TCP_SAVED_SYN)
 [TCP_REPAIR_WINDOW] = XLAT(TCP_REPAIR_WINDOW),
 #define XLAT_VAL_28 ((unsigned) (TCP_REPAIR_WINDOW))
 #define XLAT_STR_28 STRINGIFY(TCP_REPAIR_WINDOW)
 [TCP_FASTOPEN_CONNECT] = XLAT(TCP_FASTOPEN_CONNECT),
 #define XLAT_VAL_29 ((unsigned) (TCP_FASTOPEN_CONNECT))
 #define XLAT_STR_29 STRINGIFY(TCP_FASTOPEN_CONNECT)
 [TCP_ULP] = XLAT(TCP_ULP),
 #define XLAT_VAL_30 ((unsigned) (TCP_ULP))
 #define XLAT_STR_30 STRINGIFY(TCP_ULP)
 [TCP_MD5SIG_EXT] = XLAT(TCP_MD5SIG_EXT),
 #define XLAT_VAL_31 ((unsigned) (TCP_MD5SIG_EXT))
 #define XLAT_STR_31 STRINGIFY(TCP_MD5SIG_EXT)
 [TCP_FASTOPEN_KEY] = XLAT(TCP_FASTOPEN_KEY),
 #define XLAT_VAL_32 ((unsigned) (TCP_FASTOPEN_KEY))
 #define XLAT_STR_32 STRINGIFY(TCP_FASTOPEN_KEY)
 [TCP_FASTOPEN_NO_COOKIE] = XLAT(TCP_FASTOPEN_NO_COOKIE),
 #define XLAT_VAL_33 ((unsigned) (TCP_FASTOPEN_NO_COOKIE))
 #define XLAT_STR_33 STRINGIFY(TCP_FASTOPEN_NO_COOKIE)
 [TCP_ZEROCOPY_RECEIVE] = XLAT(TCP_ZEROCOPY_RECEIVE),
 #define XLAT_VAL_34 ((unsigned) (TCP_ZEROCOPY_RECEIVE))
 #define XLAT_STR_34 STRINGIFY(TCP_ZEROCOPY_RECEIVE)
 [TCP_INQ] = XLAT(TCP_INQ),
 #define XLAT_VAL_35 ((unsigned) (TCP_INQ))
 #define XLAT_STR_35 STRINGIFY(TCP_INQ)
 [TCP_TX_DELAY] = XLAT(TCP_TX_DELAY),
 #define XLAT_VAL_36 ((unsigned) (TCP_TX_DELAY))
 #define XLAT_STR_36 STRINGIFY(TCP_TX_DELAY)
 [TCP_AO_ADD_KEY] = XLAT(TCP_AO_ADD_KEY),
 #define XLAT_VAL_37 ((unsigned) (TCP_AO_ADD_KEY))
 #define XLAT_STR_37 STRINGIFY(TCP_AO_ADD_KEY)
 [TCP_AO_DEL_KEY] = XLAT(TCP_AO_DEL_KEY),
 #define XLAT_VAL_38 ((unsigned) (TCP_AO_DEL_KEY))
 #define XLAT_STR_38 STRINGIFY(TCP_AO_DEL_KEY)
 [TCP_AO_INFO] = XLAT(TCP_AO_INFO),
 #define XLAT_VAL_39 ((unsigned) (TCP_AO_INFO))
 #define XLAT_STR_39 STRINGIFY(TCP_AO_INFO)
 [TCP_AO_GET_KEYS] = XLAT(TCP_AO_GET_KEYS),
 #define XLAT_VAL_40 ((unsigned) (TCP_AO_GET_KEYS))
 #define XLAT_STR_40 STRINGIFY(TCP_AO_GET_KEYS)
 [TCP_AO_REPAIR] = XLAT(TCP_AO_REPAIR),
 #define XLAT_VAL_41 ((unsigned) (TCP_AO_REPAIR))
 #define XLAT_STR_41 STRINGIFY(TCP_AO_REPAIR)
 [TCP_IS_MPTCP] = XLAT(TCP_IS_MPTCP),
 #define XLAT_VAL_42 ((unsigned) (TCP_IS_MPTCP))
 #define XLAT_STR_42 STRINGIFY(TCP_IS_MPTCP)
};
static
const struct xlat sock_tcp_options[1] = { {
 .data = sock_tcp_options_xdata,
 .size = ARRAY_SIZE(sock_tcp_options_xdata),
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
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
#  endif
#  ifdef XLAT_VAL_29
  | XLAT_VAL_29
#  endif
#  ifdef XLAT_VAL_30
  | XLAT_VAL_30
#  endif
#  ifdef XLAT_VAL_31
  | XLAT_VAL_31
#  endif
#  ifdef XLAT_VAL_32
  | XLAT_VAL_32
#  endif
#  ifdef XLAT_VAL_33
  | XLAT_VAL_33
#  endif
#  ifdef XLAT_VAL_34
  | XLAT_VAL_34
#  endif
#  ifdef XLAT_VAL_35
  | XLAT_VAL_35
#  endif
#  ifdef XLAT_VAL_36
  | XLAT_VAL_36
#  endif
#  ifdef XLAT_VAL_37
  | XLAT_VAL_37
#  endif
#  ifdef XLAT_VAL_38
  | XLAT_VAL_38
#  endif
#  ifdef XLAT_VAL_39
  | XLAT_VAL_39
#  endif
#  ifdef XLAT_VAL_40
  | XLAT_VAL_40
#  endif
#  ifdef XLAT_VAL_41
  | XLAT_VAL_41
#  endif
#  ifdef XLAT_VAL_42
  | XLAT_VAL_42
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
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
#  endif
#  ifdef XLAT_STR_29
  + sizeof(XLAT_STR_29)
#  endif
#  ifdef XLAT_STR_30
  + sizeof(XLAT_STR_30)
#  endif
#  ifdef XLAT_STR_31
  + sizeof(XLAT_STR_31)
#  endif
#  ifdef XLAT_STR_32
  + sizeof(XLAT_STR_32)
#  endif
#  ifdef XLAT_STR_33
  + sizeof(XLAT_STR_33)
#  endif
#  ifdef XLAT_STR_34
  + sizeof(XLAT_STR_34)
#  endif
#  ifdef XLAT_STR_35
  + sizeof(XLAT_STR_35)
#  endif
#  ifdef XLAT_STR_36
  + sizeof(XLAT_STR_36)
#  endif
#  ifdef XLAT_STR_37
  + sizeof(XLAT_STR_37)
#  endif
#  ifdef XLAT_STR_38
  + sizeof(XLAT_STR_38)
#  endif
#  ifdef XLAT_STR_39
  + sizeof(XLAT_STR_39)
#  endif
#  ifdef XLAT_STR_40
  + sizeof(XLAT_STR_40)
#  endif
#  ifdef XLAT_STR_41
  + sizeof(XLAT_STR_41)
#  endif
#  ifdef XLAT_STR_42
  + sizeof(XLAT_STR_42)
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
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
#  undef XLAT_STR_29
#  undef XLAT_VAL_29
#  undef XLAT_STR_30
#  undef XLAT_VAL_30
#  undef XLAT_STR_31
#  undef XLAT_VAL_31
#  undef XLAT_STR_32
#  undef XLAT_VAL_32
#  undef XLAT_STR_33
#  undef XLAT_VAL_33
#  undef XLAT_STR_34
#  undef XLAT_VAL_34
#  undef XLAT_STR_35
#  undef XLAT_VAL_35
#  undef XLAT_STR_36
#  undef XLAT_VAL_36
#  undef XLAT_STR_37
#  undef XLAT_VAL_37
#  undef XLAT_STR_38
#  undef XLAT_VAL_38
#  undef XLAT_STR_39
#  undef XLAT_VAL_39
#  undef XLAT_STR_40
#  undef XLAT_VAL_40
#  undef XLAT_STR_41
#  undef XLAT_VAL_41
#  undef XLAT_STR_42
#  undef XLAT_VAL_42
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
