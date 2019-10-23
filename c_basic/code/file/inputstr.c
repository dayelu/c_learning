#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char *filename = "test1.txt";
	FILE *pfile = fopen(filename,"w");
	char *instr = "write something today.";
	fputs(instr, pfile);
	fclose(pfile);

	FILE *pfiler = fopen(filename,"r");
	char *pstr = (char *)malloc(10 * sizeof(char));
	char *str = fgets(pstr, 18, pfiler);
	printf("%s\n", str);
	fclose(pfiler);
	free(pstr);
	pstr = NULL;
	return 0;
}