/*
 * Copyright (c) 2021 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"

#ifdef HAVE_M32_SELINUX_RUNTIME

# define TEST_SECONTEXT
# include "faccessat-y.c"

#else

SKIP_MAIN_UNDEFINED("HAVE_M32_SELINUX_RUNTIME")

#endif
