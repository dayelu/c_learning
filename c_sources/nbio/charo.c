#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *filename = "test.txt";
	FILE *pfile = fopen(filename,"a");
	int input = 0;
	
	while( (input = getchar()) != EOF )
	{
		if (input == '@')
		{
			break;
		}
		putchar(input);
		fputc(input, pfile);
	}

	fclose(pfile);

	FILE *pfiler = fopen(filename,"r");
	
	int chc = 0;
	while( (chc = fgetc(pfiler)) != EOF )
	{
		printf("%c", chc);
	}
	printf("\n");
	fclose(pfiler);
	return 0;
}