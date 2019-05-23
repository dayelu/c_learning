#include <stdio.h>

int main(int argc, char const *argv[])
{
	// char *filename = "test.txt";
	// FILE *pfile = fopen(filename, "r");
	// char res = fgetc(pfile);
	// ungetc(res,pfile);
	// printf("%c\n", fgetc(pfile));
	char ch = 'd';
	ungetc(ch,stdin);
	char res = getchar();
	printf("%c\n", res);

	return 0;
}