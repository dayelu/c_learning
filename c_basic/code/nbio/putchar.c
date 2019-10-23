#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ch = 0;
	printf("请输入一段字符：\n");
	while( (ch = getchar()) != EOF )
	{
		if (ch == '@')
		{
			break;
		}
		// printf("%c", putchar(ch));
		putchar(ch);
	}
	printf("\n");

	return 0;
}