#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *filename = "test.txt";
	int pnum = 0;
	char *pstr = NULL;
	FILE *pfile = fopen(filename, "r");

	fscanf(pfile, "%d %s", &pnum, pstr);
	printf("%d %10s\n", pnum, pstr);
	return 0;
}