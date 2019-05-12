#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = (3,5);
	int b = (5,4);
	int c = (5,6);

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	// printf("%d %d %d\n", (a++,b++,c++));
	// printf("%d %d\n", (a++,b++,c++));
    printf("%d\n", (a++,b++,c++));

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	if (-3.5)
	{
		printf("OK!\n");
	}
	int k=3,s[k];
	// int k=3;int s[k];
	printf("The size of int is:%d\n", sizeof(int));
	printf("The size of array s is:%d\n", sizeof s);
	return 0;
}