#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int c;

	if (argc < 2)
		fp = stdin;
	else
		fp = fopen(argv[1], "r");

	c = getc(fp);
	return 0;
}
