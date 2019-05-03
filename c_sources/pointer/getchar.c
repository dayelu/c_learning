#include <stdio.h>
int main(int argc, char const *argv[])
{

	char ch;
	while( (ch = getchar()) != '\n' ){
		putchar(ch);
	}

	return 0;
}