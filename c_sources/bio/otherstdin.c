#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
int main(int argc, char const *argv[])
{
	char ch = NULL;
	while(ch = getchar())
	{
		if (ch ==  '\0')
		{
			exit(1);
		}
		printf("%c", ch);
	}
	
	return 0;
}