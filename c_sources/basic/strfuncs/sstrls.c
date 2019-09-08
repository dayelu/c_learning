#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct data
	{
		int i;
		char c;	
		float a;
	}test;

	struct data demo[10] = {
		3, 'i', 3.33,
		2, 't', 
	};

	printf("demo[0].c = %c\n", demo[0].c);
	printf("demo[1].c = %c\n", demo[1].c);

	printf("int = %d\n", sizeof(int));
	printf("char = %d\n", sizeof(char));
	printf("float = %d\n", sizeof(float));
	printf("%d\n", sizeof test);
	return 0;
}