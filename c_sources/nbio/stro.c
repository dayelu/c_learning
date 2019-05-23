#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *filename =  "text1.txt";
	FILE *pfile = fopen(filename,"r");
	char *buffer = NULL;
	// gets(filename);
	fgets(buffer,1024, pfile);
	printf("%s\n", buffer);
	fclose(pfile);
	return 0;
}