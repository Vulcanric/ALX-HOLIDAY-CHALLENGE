#include <stdio.h>
#include <unistd.h>

/* CHRISTMAS Colours */
#define RED "\033[31;1m"
#define GREEN "\033[32;1m"
#define YELLOW "\033[33;1m"
#define WHITE ""
#define BLUE "\033[34m"
#define PURPLE "\033[35m"

/* Other functionalities */
#define CLEAR "\033[2J\033[H"
#define RESET "\033[0m"

int main(void)
{
	int i;

	/* MERRY */
	char *m[10] = {
		"            ",
		"\t!,~. ,~.  ",
		"\t|   !   | ",
		"\t|   |   | ",
		"\t|   |   | ",
		"\t|       | "
	};
	char *e[10] = {
		"         ",
		" ~~~~~~~ ",
		"\\        ",
		"  ~~~~   ",
		"(        ",
		" ~~~~~~~ ",
	};
	char *r1[10] = {
		"         ",
		"         ",
		"!,~~~~.  ",
		"|        ",
		"|        ",
		"|        "
	};
	char *r2[10] = {
		"        ",
		"        ",
		"!,~~~~. ",
		"|       ",
		"|       ",
		"|       "
	};
	char *y[10] = {
		"        \n",
		"  /    |\n",
		" (     |\n",
		"   ~~~~!\n",
		"       ;\n",
		"   (__/ \n"
	};


	/* CHRISTMAS */
	char *c[10] = {
		"  +  +    ",
		"  .~~~. + ",
		" +        ",
		" |    +   ",
		" | +    + ",
		" *.___.   "
	};
	char *h[10] = {
		"  +       ",
		"|  +  +   ",
		"|___+   + ",
		"|   + \\+  ",
		"| +   !   ",
		"|   + |   "
	};
	char *r[10] = {
		" ++   +   ",
		" +  +     ",
		"!,~~~~.   ",
		"| +       ",
		"|   +     ",
		"| +   +   "
	};
	char *ai[10] = {
		"+ + ",
		" ~  ",
		" |+ ",
		"+|  ",
		" |+ ",
		" ~  "
	};
	char *s1[10] = {
		" +    +  ",
		"  _+__   ",
		"+/   +\\  ",
		" \\_+_+   ",
		"   + +\\+ ",
		" \\__+_/+ "
	};
	char *t[10] = {
		"+       + ",
		"+ ! +  +  ",
		"~~|~~     ",
		"+ |  +    ",
		" +| +  +  ",
		"  \\_)+    "
	};
	char *m1[10] = {
		" +  +    +  ",
		" .~~. .~~.  ",
		"|+  +| +  | ",
		"| +  |  + | ",
		"|    | +  | ",
		"|         | "
	};
	char *a[10] = {
		"    +       ",
		"+ .~~~~. +  ",
		" | +  + |   ",
		" |+  +  |+  ",
		" \\_____/| + ",
		" +  +   |+  "
	};
	char *s2[10] = {
		" +    + \n",
		"  _+__  \n",
		"+/   +\\ \n",
		" \\_+_+  \n",
		"  + + \\+\n",
		" \\__+_/+\n"
	};

	printf("%s", CLEAR);
	/* Prints "Merry" */
	for (i = 0; i < 6; i++)
	{
		sleep(1);
		printf("%s%s%s", RED, m[i], RESET);
		printf("%s%s%s", GREEN, e[i], RESET);
		printf("%s%s%s", WHITE, r1[i], RESET);
		printf("%s%s%s", RED, r2[i], RESET);
		printf("%s%s%s", YELLOW, y[i], RESET);
		/* sleep(1.5);*/
	}

	printf("\n");
	/* Prints "Christmas" */
	for (i = 0; i < 6; i++)
	{
		sleep(1);
		printf("%s%s%s", YELLOW, c[i], RESET);
		printf("%s%s%s", YELLOW, h[i], RESET);
		printf("%s%s%s", YELLOW, r[i], RESET);
		printf("%s%s%s", YELLOW, ai[i], RESET);
		printf("%s%s%s", YELLOW, s1[i], RESET);
		printf("%s%s%s", YELLOW, t[i], RESET);
		printf("%s%s%s", YELLOW, m1[i], RESET);
		printf("%s%s%s", YELLOW, a[i], RESET);
		printf("%s%s%s", YELLOW, s2[i], RESET);
		/* sleep(1.5); */
	}

	return (0);
}
