#include <stdio.h>
int main(int argc, char const *argv[])
{
	long num = 100L;
	const long *pointer = NULL;	//pointer initial
	pointer = &num;
	printf("num =  %ld\n", num);
	printf("*pointer =  %ld\n", *pointer);
	printf("pointer =  %p\n", pointer);
	
	// *pointer = 300L;		//assignment of read-only location '*pointer'
	num =200L;
	long result = *pointer + 5;
	printf("result = %ld\n", result);
	printf("num =  %ld\n", num);
	printf("pointer =  %p\n", pointer);
	printf("pointer memorize size: %d\n", sizeof pointer);

	printf("������һ������:");
	int number;
	int *add = &number;
	scanf("%d",add);
	printf("��������ǣ�%d\n", number);
	return 0;
}