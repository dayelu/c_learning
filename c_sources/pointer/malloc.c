#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	//int *pNumber = (int *)malloc(10 * sizeof(int));
	int *pNumber = NULL;
	pNumber = (int *)realloc(pNumber ,10 * sizeof(int));

	int *pNum = NULL;

	pNumber = (int *)calloc(10 ,sizeof(int));

	if(pNumber == NULL){
		printf("内存不足！");
	}

	if(pNumber == NULL){
		printf("内存不足！");
	}

	// printf("%d\n", sizeof pNumber);

	*pNumber = 1;
	*(pNumber + 1) = 2;
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", *(pNumber + i));
	}
	// printf("%x\n", pNumber);
	// printf("%d\n", *pNumber);
	free(pNumber);
	printf("===================================================\n");
	// printf("%x\n", pNumber);
	// printf("%d\n", *pNumber);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", *(pNumber + i));
	}

	return 0;
}