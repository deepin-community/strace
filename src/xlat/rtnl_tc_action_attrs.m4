dnl Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_tc_action_attrs.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_rtnl_tc_action_attrs],[
AC_CHECK_DECLS(m4_normalize([
TCA_ACT_UNSPEC,
TCA_ACT_KIND,
TCA_ACT_OPTIONS,
TCA_ACT_INDEX,
TCA_ACT_STATS,
TCA_ACT_PAD,
TCA_ACT_COOKIE,
TCA_ACT_FLAGS,
TCA_ACT_HW_STATS,
TCA_ACT_USED_HW_STATS,
TCA_ACT_IN_HW_COUNT
]),,, [
#include <linux/pkt_cls.h>
])])])
