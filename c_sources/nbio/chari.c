#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *filename = "demo.txt";
	FILE *pfile = fopen(filename,"r");
	int ch;

	while( (ch = fgetc(pfile)) != EOF )
	{

		printf("%c", ch);
	}

	printf("\n");

	printf("请输入一个字符串：\n");

	int chs;
	while( (chs = getchar()) != EOF)
	{
		if (chs == '@')
		{
			break;
		}
		printf("%c", chs);
	}
	printf("\n");
	fclose(pfile);
	return 0;
}