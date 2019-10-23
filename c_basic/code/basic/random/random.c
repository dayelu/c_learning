#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int chosen = 0;
	int num[10];
	for (int i = 0; i < 10; ++i)
	{
		num[i] = rand();
		printf("%d\t", num[i]);
	}
	printf("\n");
	return 0;
}