#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char* str[] = {"nibupei","erpilian"};
	int n = 5;
	str_out(str, n);
	return 0;
}

int str_out(char *p[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%s\n", *p);
		free(*p);
		*p++ = NULL;
	}
	return 0;
}