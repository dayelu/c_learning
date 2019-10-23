#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *filename = "myfile.txt";
	FILE *pfile = fopen(filename,"w");
	char pdata[] = "how are you? are ok ?";
	fprintf(pfile, "%s\n", pdata);
	fclose(pfile);

	return 0;
}