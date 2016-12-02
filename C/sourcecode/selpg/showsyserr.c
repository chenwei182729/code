

/*=================================================================

Program name:
	showsyserr (SHOW SYStem ERRors)

Purpose:
	This program allows the user to do see the system error messages
	corresponding to any value of the system call error variable
	called errno. It can either display the message for a single value
	of errno (passed as an argument on the command line) or the messages
	corresponding to all possible values of errno (if no command line
	argument is given).

Author: Vasudev Ram

===================================================================*/

/*================================= includes ======================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <assert.h>
#include <errno.h>

/*================================= types =========================*/

/*================================= globals =======================*/

char *progname; /* program name, for error messages */

/*================================= prototypes ====================*/

void usage(void);
int main(int ac, char **av);

/*================================= main()=== =====================*/

int main(int ac, char **av)
{
	int en;

	progname = av[0];

	if (ac == 2)
	{
		en = atoi(av[1]);
		printf("Errno: %4d\tMsg: %s\n", en, strerror(en));
	}
	else if (ac == 1)
	{
		for (en = 0; en < sys_nerr; en++)
		{
			printf("Errno: %4d\tMsg: %s\n", en, strerror(en));
		}

	}
	else
	{
		usage();
		exit(1);
	}

	return 0;
}

/*================================= usage() =======================*/

void usage(void)
{
	fprintf(stderr, "USAGE: %s [ error_number ]\n", progname);
}

/*================================= EOF ===========================*/

