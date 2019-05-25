#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	int num[10];
	int limit = 100;
	for (int i = 0; i < 10; ++i)
	{
		num[i] = rand() % limit;
		printf("%d\t", num[i]);
	}
	printf("\n");

	return 0;
}