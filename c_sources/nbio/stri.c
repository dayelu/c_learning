#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *filename =  "text1.txt";
	FILE *pfile = fopen(filename,"w");
	puts(filename);
	fputs(filename, pfile);
	fclose(pfile);
	return 0;
}