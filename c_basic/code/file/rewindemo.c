#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *filename = "myfile.bin";
	FILE *pfile = fopen(filename,"wb");
	char pdata[] = "how are you? are ok ?";
	char *instr = "I'm fine, thanks.";

	fprintf(pfile, "%s\n", pdata);
	rewind(pfile);
	if (fscanf(pfile, "%s", instr))
	{
		printf("%s\n", instr);
	};
	printf("%d\n", __LINE__);
	puts(__TIME__);
	puts(__FILE__);
	puts(__TIME__);
	fclose(pfile);
	return 0;
}