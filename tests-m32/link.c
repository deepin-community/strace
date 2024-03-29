/*
 * Copyright (c) 2016-2023 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include "scno.h"

#ifdef __NR_link

# include <stdio.h>
# include <string.h>
# include <unistd.h>

int
main(void)
{
	static const char sample_1_str[] = "link_sample_old";
	static const char sample_2_str[] = "link_sample_new";

	TAIL_ALLOC_OBJECT_CONST_ARR(char, sample_1, sizeof(sample_1_str));
	TAIL_ALLOC_OBJECT_CONST_ARR(char, sample_2, sizeof(sample_2_str));
	TAIL_ALLOC_OBJECT_CONST_ARR(char, short_1, sizeof(sample_1_str) - 1);
	TAIL_ALLOC_OBJECT_CONST_ARR(char, short_2, sizeof(sample_2_str) - 1);

	long rc;

	memcpy(sample_1, sample_1_str, sizeof(sample_1_str));
	memcpy(sample_2, sample_2_str, sizeof(sample_2_str));
	memcpy(short_1, sample_1_str, sizeof(sample_1_str) - 1);
	memcpy(short_2, sample_2_str, sizeof(sample_2_str) - 1);

	rc = syscall(__NR_link, NULL, NULL);
# ifndef PATH_TRACING
	printf("link(NULL, NULL) = %ld %s (%m)\n", rc, errno2name());
# endif

	rc = syscall(__NR_link, short_1, NULL);
# ifndef PATH_TRACING
	printf("link(%p, NULL) = %ld %s (%m)\n",
	       short_1, rc, errno2name());
# endif

	rc = syscall(__NR_link, NULL, sample_1);
	printf("link(NULL, \"%s\") = %ld %s (%m)\n",
	       sample_1_str, rc, errno2name());

	rc = syscall(__NR_link, sample_1, short_2);
	printf("link(\"%s\", %p) = %ld %s (%m)\n",
	       sample_1_str, short_2, rc, errno2name());

	rc = syscall(__NR_link, short_1, sample_2);
# ifndef PATH_TRACING
	printf("link(%p, \"%s\") = %ld %s (%m)\n",
	       short_1, sample_2_str, rc, errno2name());
# endif

	rc = syscall(__NR_link, sample_1, sample_2);
	printf("link(\"%s\", \"%s\") = %ld %s (%m)\n",
	       sample_1_str, sample_2_str, rc, errno2name());

	puts("+++ exited with 0 +++");
	return 0;
}

#else

SKIP_MAIN_UNDEFINED("__NR_link")

#endif
