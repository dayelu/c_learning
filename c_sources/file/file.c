#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *filename = "test1.txt";
	FILE *pfile = fopen(filename,"w");
	fputc('c',pfile);
	fclose(pfile);

	FILE *pfiler = fopen(filename,"r");
	char mchar = fgetc(pfiler);
	printf("%c\n", mchar);
	fclose(pfiler);
	// remove(filename)
	return 0;
}