/* Generated by ./src/xlat/gen.sh from ./src/xlat/bpf_prog_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_PROG_TYPE_UNSPEC) || (defined(HAVE_DECL_BPF_PROG_TYPE_UNSPEC) && HAVE_DECL_BPF_PROG_TYPE_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_UNSPEC) == (0), "BPF_PROG_TYPE_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_UNSPEC 0
#endif
#if defined(BPF_PROG_TYPE_SOCKET_FILTER) || (defined(HAVE_DECL_BPF_PROG_TYPE_SOCKET_FILTER) && HAVE_DECL_BPF_PROG_TYPE_SOCKET_FILTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SOCKET_FILTER) == (1), "BPF_PROG_TYPE_SOCKET_FILTER != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SOCKET_FILTER 1
#endif
#if defined(BPF_PROG_TYPE_KPROBE) || (defined(HAVE_DECL_BPF_PROG_TYPE_KPROBE) && HAVE_DECL_BPF_PROG_TYPE_KPROBE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_KPROBE) == (2), "BPF_PROG_TYPE_KPROBE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_KPROBE 2
#endif
#if defined(BPF_PROG_TYPE_SCHED_CLS) || (defined(HAVE_DECL_BPF_PROG_TYPE_SCHED_CLS) && HAVE_DECL_BPF_PROG_TYPE_SCHED_CLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SCHED_CLS) == (3), "BPF_PROG_TYPE_SCHED_CLS != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SCHED_CLS 3
#endif
#if defined(BPF_PROG_TYPE_SCHED_ACT) || (defined(HAVE_DECL_BPF_PROG_TYPE_SCHED_ACT) && HAVE_DECL_BPF_PROG_TYPE_SCHED_ACT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SCHED_ACT) == (4), "BPF_PROG_TYPE_SCHED_ACT != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SCHED_ACT 4
#endif
#if defined(BPF_PROG_TYPE_TRACEPOINT) || (defined(HAVE_DECL_BPF_PROG_TYPE_TRACEPOINT) && HAVE_DECL_BPF_PROG_TYPE_TRACEPOINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_TRACEPOINT) == (5), "BPF_PROG_TYPE_TRACEPOINT != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_TRACEPOINT 5
#endif
#if defined(BPF_PROG_TYPE_XDP) || (defined(HAVE_DECL_BPF_PROG_TYPE_XDP) && HAVE_DECL_BPF_PROG_TYPE_XDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_XDP) == (6), "BPF_PROG_TYPE_XDP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_XDP 6
#endif
#if defined(BPF_PROG_TYPE_PERF_EVENT) || (defined(HAVE_DECL_BPF_PROG_TYPE_PERF_EVENT) && HAVE_DECL_BPF_PROG_TYPE_PERF_EVENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_PERF_EVENT) == (7), "BPF_PROG_TYPE_PERF_EVENT != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_PERF_EVENT 7
#endif
#if defined(BPF_PROG_TYPE_CGROUP_SKB) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SKB) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SKB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_SKB) == (8), "BPF_PROG_TYPE_CGROUP_SKB != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_SKB 8
#endif
#if defined(BPF_PROG_TYPE_CGROUP_SOCK) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_SOCK) == (9), "BPF_PROG_TYPE_CGROUP_SOCK != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_SOCK 9
#endif
#if defined(BPF_PROG_TYPE_LWT_IN) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_IN) && HAVE_DECL_BPF_PROG_TYPE_LWT_IN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LWT_IN) == (10), "BPF_PROG_TYPE_LWT_IN != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LWT_IN 10
#endif
#if defined(BPF_PROG_TYPE_LWT_OUT) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_OUT) && HAVE_DECL_BPF_PROG_TYPE_LWT_OUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LWT_OUT) == (11), "BPF_PROG_TYPE_LWT_OUT != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LWT_OUT 11
#endif
#if defined(BPF_PROG_TYPE_LWT_XMIT) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_XMIT) && HAVE_DECL_BPF_PROG_TYPE_LWT_XMIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LWT_XMIT) == (12), "BPF_PROG_TYPE_LWT_XMIT != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LWT_XMIT 12
#endif
#if defined(BPF_PROG_TYPE_SOCK_OPS) || (defined(HAVE_DECL_BPF_PROG_TYPE_SOCK_OPS) && HAVE_DECL_BPF_PROG_TYPE_SOCK_OPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SOCK_OPS) == (13), "BPF_PROG_TYPE_SOCK_OPS != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SOCK_OPS 13
#endif
#if defined(BPF_PROG_TYPE_SK_SKB) || (defined(HAVE_DECL_BPF_PROG_TYPE_SK_SKB) && HAVE_DECL_BPF_PROG_TYPE_SK_SKB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SK_SKB) == (14), "BPF_PROG_TYPE_SK_SKB != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SK_SKB 14
#endif
#if defined(BPF_PROG_TYPE_CGROUP_DEVICE) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_DEVICE) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_DEVICE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_DEVICE) == (15), "BPF_PROG_TYPE_CGROUP_DEVICE != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_DEVICE 15
#endif
#if defined(BPF_PROG_TYPE_SK_MSG) || (defined(HAVE_DECL_BPF_PROG_TYPE_SK_MSG) && HAVE_DECL_BPF_PROG_TYPE_SK_MSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SK_MSG) == (16), "BPF_PROG_TYPE_SK_MSG != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SK_MSG 16
#endif
#if defined(BPF_PROG_TYPE_RAW_TRACEPOINT) || (defined(HAVE_DECL_BPF_PROG_TYPE_RAW_TRACEPOINT) && HAVE_DECL_BPF_PROG_TYPE_RAW_TRACEPOINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_RAW_TRACEPOINT) == (17), "BPF_PROG_TYPE_RAW_TRACEPOINT != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_RAW_TRACEPOINT 17
#endif
#if defined(BPF_PROG_TYPE_CGROUP_SOCK_ADDR) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK_ADDR) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK_ADDR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_SOCK_ADDR) == (18), "BPF_PROG_TYPE_CGROUP_SOCK_ADDR != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_SOCK_ADDR 18
#endif
#if defined(BPF_PROG_TYPE_LWT_SEG6LOCAL) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_SEG6LOCAL) && HAVE_DECL_BPF_PROG_TYPE_LWT_SEG6LOCAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LWT_SEG6LOCAL) == (19), "BPF_PROG_TYPE_LWT_SEG6LOCAL != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LWT_SEG6LOCAL 19
#endif
#if defined(BPF_PROG_TYPE_LIRC_MODE2) || (defined(HAVE_DECL_BPF_PROG_TYPE_LIRC_MODE2) && HAVE_DECL_BPF_PROG_TYPE_LIRC_MODE2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LIRC_MODE2) == (20), "BPF_PROG_TYPE_LIRC_MODE2 != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LIRC_MODE2 20
#endif
#if defined(BPF_PROG_TYPE_SK_REUSEPORT) || (defined(HAVE_DECL_BPF_PROG_TYPE_SK_REUSEPORT) && HAVE_DECL_BPF_PROG_TYPE_SK_REUSEPORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SK_REUSEPORT) == (21), "BPF_PROG_TYPE_SK_REUSEPORT != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SK_REUSEPORT 21
#endif
#if defined(BPF_PROG_TYPE_FLOW_DISSECTOR) || (defined(HAVE_DECL_BPF_PROG_TYPE_FLOW_DISSECTOR) && HAVE_DECL_BPF_PROG_TYPE_FLOW_DISSECTOR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_FLOW_DISSECTOR) == (22), "BPF_PROG_TYPE_FLOW_DISSECTOR != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_FLOW_DISSECTOR 22
#endif
#if defined(BPF_PROG_TYPE_CGROUP_SYSCTL) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SYSCTL) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SYSCTL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_SYSCTL) == (23), "BPF_PROG_TYPE_CGROUP_SYSCTL != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_SYSCTL 23
#endif
#if defined(BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE) || (defined(HAVE_DECL_BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE) && HAVE_DECL_BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE) == (24), "BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE 24
#endif
#if defined(BPF_PROG_TYPE_CGROUP_SOCKOPT) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCKOPT) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCKOPT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_SOCKOPT) == (25), "BPF_PROG_TYPE_CGROUP_SOCKOPT != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_SOCKOPT 25
#endif
#if defined(BPF_PROG_TYPE_TRACING) || (defined(HAVE_DECL_BPF_PROG_TYPE_TRACING) && HAVE_DECL_BPF_PROG_TYPE_TRACING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_TRACING) == (26), "BPF_PROG_TYPE_TRACING != 26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_TRACING 26
#endif
#if defined(BPF_PROG_TYPE_STRUCT_OPS) || (defined(HAVE_DECL_BPF_PROG_TYPE_STRUCT_OPS) && HAVE_DECL_BPF_PROG_TYPE_STRUCT_OPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_STRUCT_OPS) == (27), "BPF_PROG_TYPE_STRUCT_OPS != 27");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_STRUCT_OPS 27
#endif
#if defined(BPF_PROG_TYPE_EXT) || (defined(HAVE_DECL_BPF_PROG_TYPE_EXT) && HAVE_DECL_BPF_PROG_TYPE_EXT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_EXT) == (28), "BPF_PROG_TYPE_EXT != 28");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_EXT 28
#endif
#if defined(BPF_PROG_TYPE_LSM) || (defined(HAVE_DECL_BPF_PROG_TYPE_LSM) && HAVE_DECL_BPF_PROG_TYPE_LSM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LSM) == (29), "BPF_PROG_TYPE_LSM != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LSM 29
#endif
#if defined(BPF_PROG_TYPE_SK_LOOKUP) || (defined(HAVE_DECL_BPF_PROG_TYPE_SK_LOOKUP) && HAVE_DECL_BPF_PROG_TYPE_SK_LOOKUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SK_LOOKUP) == (30), "BPF_PROG_TYPE_SK_LOOKUP != 30");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SK_LOOKUP 30
#endif
#if defined(BPF_PROG_TYPE_SYSCALL) || (defined(HAVE_DECL_BPF_PROG_TYPE_SYSCALL) && HAVE_DECL_BPF_PROG_TYPE_SYSCALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SYSCALL) == (31), "BPF_PROG_TYPE_SYSCALL != 31");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SYSCALL 31
#endif
#if defined(BPF_PROG_TYPE_NETFILTER) || (defined(HAVE_DECL_BPF_PROG_TYPE_NETFILTER) && HAVE_DECL_BPF_PROG_TYPE_NETFILTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_NETFILTER) == (32), "BPF_PROG_TYPE_NETFILTER != 32");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_NETFILTER 32
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_prog_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data bpf_prog_types_xdata[] = {
 [BPF_PROG_TYPE_UNSPEC] = XLAT(BPF_PROG_TYPE_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (BPF_PROG_TYPE_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(BPF_PROG_TYPE_UNSPEC)
 [BPF_PROG_TYPE_SOCKET_FILTER] = XLAT(BPF_PROG_TYPE_SOCKET_FILTER),
 #define XLAT_VAL_1 ((unsigned) (BPF_PROG_TYPE_SOCKET_FILTER))
 #define XLAT_STR_1 STRINGIFY(BPF_PROG_TYPE_SOCKET_FILTER)
 [BPF_PROG_TYPE_KPROBE] = XLAT(BPF_PROG_TYPE_KPROBE),
 #define XLAT_VAL_2 ((unsigned) (BPF_PROG_TYPE_KPROBE))
 #define XLAT_STR_2 STRINGIFY(BPF_PROG_TYPE_KPROBE)
 [BPF_PROG_TYPE_SCHED_CLS] = XLAT(BPF_PROG_TYPE_SCHED_CLS),
 #define XLAT_VAL_3 ((unsigned) (BPF_PROG_TYPE_SCHED_CLS))
 #define XLAT_STR_3 STRINGIFY(BPF_PROG_TYPE_SCHED_CLS)
 [BPF_PROG_TYPE_SCHED_ACT] = XLAT(BPF_PROG_TYPE_SCHED_ACT),
 #define XLAT_VAL_4 ((unsigned) (BPF_PROG_TYPE_SCHED_ACT))
 #define XLAT_STR_4 STRINGIFY(BPF_PROG_TYPE_SCHED_ACT)
 [BPF_PROG_TYPE_TRACEPOINT] = XLAT(BPF_PROG_TYPE_TRACEPOINT),
 #define XLAT_VAL_5 ((unsigned) (BPF_PROG_TYPE_TRACEPOINT))
 #define XLAT_STR_5 STRINGIFY(BPF_PROG_TYPE_TRACEPOINT)
 [BPF_PROG_TYPE_XDP] = XLAT(BPF_PROG_TYPE_XDP),
 #define XLAT_VAL_6 ((unsigned) (BPF_PROG_TYPE_XDP))
 #define XLAT_STR_6 STRINGIFY(BPF_PROG_TYPE_XDP)
 [BPF_PROG_TYPE_PERF_EVENT] = XLAT(BPF_PROG_TYPE_PERF_EVENT),
 #define XLAT_VAL_7 ((unsigned) (BPF_PROG_TYPE_PERF_EVENT))
 #define XLAT_STR_7 STRINGIFY(BPF_PROG_TYPE_PERF_EVENT)
 [BPF_PROG_TYPE_CGROUP_SKB] = XLAT(BPF_PROG_TYPE_CGROUP_SKB),
 #define XLAT_VAL_8 ((unsigned) (BPF_PROG_TYPE_CGROUP_SKB))
 #define XLAT_STR_8 STRINGIFY(BPF_PROG_TYPE_CGROUP_SKB)
 [BPF_PROG_TYPE_CGROUP_SOCK] = XLAT(BPF_PROG_TYPE_CGROUP_SOCK),
 #define XLAT_VAL_9 ((unsigned) (BPF_PROG_TYPE_CGROUP_SOCK))
 #define XLAT_STR_9 STRINGIFY(BPF_PROG_TYPE_CGROUP_SOCK)
 [BPF_PROG_TYPE_LWT_IN] = XLAT(BPF_PROG_TYPE_LWT_IN),
 #define XLAT_VAL_10 ((unsigned) (BPF_PROG_TYPE_LWT_IN))
 #define XLAT_STR_10 STRINGIFY(BPF_PROG_TYPE_LWT_IN)
 [BPF_PROG_TYPE_LWT_OUT] = XLAT(BPF_PROG_TYPE_LWT_OUT),
 #define XLAT_VAL_11 ((unsigned) (BPF_PROG_TYPE_LWT_OUT))
 #define XLAT_STR_11 STRINGIFY(BPF_PROG_TYPE_LWT_OUT)
 [BPF_PROG_TYPE_LWT_XMIT] = XLAT(BPF_PROG_TYPE_LWT_XMIT),
 #define XLAT_VAL_12 ((unsigned) (BPF_PROG_TYPE_LWT_XMIT))
 #define XLAT_STR_12 STRINGIFY(BPF_PROG_TYPE_LWT_XMIT)
 [BPF_PROG_TYPE_SOCK_OPS] = XLAT(BPF_PROG_TYPE_SOCK_OPS),
 #define XLAT_VAL_13 ((unsigned) (BPF_PROG_TYPE_SOCK_OPS))
 #define XLAT_STR_13 STRINGIFY(BPF_PROG_TYPE_SOCK_OPS)
 [BPF_PROG_TYPE_SK_SKB] = XLAT(BPF_PROG_TYPE_SK_SKB),
 #define XLAT_VAL_14 ((unsigned) (BPF_PROG_TYPE_SK_SKB))
 #define XLAT_STR_14 STRINGIFY(BPF_PROG_TYPE_SK_SKB)
 [BPF_PROG_TYPE_CGROUP_DEVICE] = XLAT(BPF_PROG_TYPE_CGROUP_DEVICE),
 #define XLAT_VAL_15 ((unsigned) (BPF_PROG_TYPE_CGROUP_DEVICE))
 #define XLAT_STR_15 STRINGIFY(BPF_PROG_TYPE_CGROUP_DEVICE)
 [BPF_PROG_TYPE_SK_MSG] = XLAT(BPF_PROG_TYPE_SK_MSG),
 #define XLAT_VAL_16 ((unsigned) (BPF_PROG_TYPE_SK_MSG))
 #define XLAT_STR_16 STRINGIFY(BPF_PROG_TYPE_SK_MSG)
 [BPF_PROG_TYPE_RAW_TRACEPOINT] = XLAT(BPF_PROG_TYPE_RAW_TRACEPOINT),
 #define XLAT_VAL_17 ((unsigned) (BPF_PROG_TYPE_RAW_TRACEPOINT))
 #define XLAT_STR_17 STRINGIFY(BPF_PROG_TYPE_RAW_TRACEPOINT)
 [BPF_PROG_TYPE_CGROUP_SOCK_ADDR] = XLAT(BPF_PROG_TYPE_CGROUP_SOCK_ADDR),
 #define XLAT_VAL_18 ((unsigned) (BPF_PROG_TYPE_CGROUP_SOCK_ADDR))
 #define XLAT_STR_18 STRINGIFY(BPF_PROG_TYPE_CGROUP_SOCK_ADDR)
 [BPF_PROG_TYPE_LWT_SEG6LOCAL] = XLAT(BPF_PROG_TYPE_LWT_SEG6LOCAL),
 #define XLAT_VAL_19 ((unsigned) (BPF_PROG_TYPE_LWT_SEG6LOCAL))
 #define XLAT_STR_19 STRINGIFY(BPF_PROG_TYPE_LWT_SEG6LOCAL)
 [BPF_PROG_TYPE_LIRC_MODE2] = XLAT(BPF_PROG_TYPE_LIRC_MODE2),
 #define XLAT_VAL_20 ((unsigned) (BPF_PROG_TYPE_LIRC_MODE2))
 #define XLAT_STR_20 STRINGIFY(BPF_PROG_TYPE_LIRC_MODE2)
 [BPF_PROG_TYPE_SK_REUSEPORT] = XLAT(BPF_PROG_TYPE_SK_REUSEPORT),
 #define XLAT_VAL_21 ((unsigned) (BPF_PROG_TYPE_SK_REUSEPORT))
 #define XLAT_STR_21 STRINGIFY(BPF_PROG_TYPE_SK_REUSEPORT)
 [BPF_PROG_TYPE_FLOW_DISSECTOR] = XLAT(BPF_PROG_TYPE_FLOW_DISSECTOR),
 #define XLAT_VAL_22 ((unsigned) (BPF_PROG_TYPE_FLOW_DISSECTOR))
 #define XLAT_STR_22 STRINGIFY(BPF_PROG_TYPE_FLOW_DISSECTOR)
 [BPF_PROG_TYPE_CGROUP_SYSCTL] = XLAT(BPF_PROG_TYPE_CGROUP_SYSCTL),
 #define XLAT_VAL_23 ((unsigned) (BPF_PROG_TYPE_CGROUP_SYSCTL))
 #define XLAT_STR_23 STRINGIFY(BPF_PROG_TYPE_CGROUP_SYSCTL)
 [BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE] = XLAT(BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE),
 #define XLAT_VAL_24 ((unsigned) (BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE))
 #define XLAT_STR_24 STRINGIFY(BPF_PROG_TYPE_RAW_TRACEPOINT_WRITABLE)
 [BPF_PROG_TYPE_CGROUP_SOCKOPT] = XLAT(BPF_PROG_TYPE_CGROUP_SOCKOPT),
 #define XLAT_VAL_25 ((unsigned) (BPF_PROG_TYPE_CGROUP_SOCKOPT))
 #define XLAT_STR_25 STRINGIFY(BPF_PROG_TYPE_CGROUP_SOCKOPT)
 [BPF_PROG_TYPE_TRACING] = XLAT(BPF_PROG_TYPE_TRACING),
 #define XLAT_VAL_26 ((unsigned) (BPF_PROG_TYPE_TRACING))
 #define XLAT_STR_26 STRINGIFY(BPF_PROG_TYPE_TRACING)
 [BPF_PROG_TYPE_STRUCT_OPS] = XLAT(BPF_PROG_TYPE_STRUCT_OPS),
 #define XLAT_VAL_27 ((unsigned) (BPF_PROG_TYPE_STRUCT_OPS))
 #define XLAT_STR_27 STRINGIFY(BPF_PROG_TYPE_STRUCT_OPS)
 [BPF_PROG_TYPE_EXT] = XLAT(BPF_PROG_TYPE_EXT),
 #define XLAT_VAL_28 ((unsigned) (BPF_PROG_TYPE_EXT))
 #define XLAT_STR_28 STRINGIFY(BPF_PROG_TYPE_EXT)
 [BPF_PROG_TYPE_LSM] = XLAT(BPF_PROG_TYPE_LSM),
 #define XLAT_VAL_29 ((unsigned) (BPF_PROG_TYPE_LSM))
 #define XLAT_STR_29 STRINGIFY(BPF_PROG_TYPE_LSM)
 [BPF_PROG_TYPE_SK_LOOKUP] = XLAT(BPF_PROG_TYPE_SK_LOOKUP),
 #define XLAT_VAL_30 ((unsigned) (BPF_PROG_TYPE_SK_LOOKUP))
 #define XLAT_STR_30 STRINGIFY(BPF_PROG_TYPE_SK_LOOKUP)
 [BPF_PROG_TYPE_SYSCALL] = XLAT(BPF_PROG_TYPE_SYSCALL),
 #define XLAT_VAL_31 ((unsigned) (BPF_PROG_TYPE_SYSCALL))
 #define XLAT_STR_31 STRINGIFY(BPF_PROG_TYPE_SYSCALL)
 [BPF_PROG_TYPE_NETFILTER] = XLAT(BPF_PROG_TYPE_NETFILTER),
 #define XLAT_VAL_32 ((unsigned) (BPF_PROG_TYPE_NETFILTER))
 #define XLAT_STR_32 STRINGIFY(BPF_PROG_TYPE_NETFILTER)
};
static
const struct xlat bpf_prog_types[1] = { {
 .data = bpf_prog_types_xdata,
 .size = ARRAY_SIZE(bpf_prog_types_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
