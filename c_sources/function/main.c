#include <stdio.h>
 
int main(int argc, char const *argv[])
{
	printf("%d\n", argc);
	int i = 0;

	while(argv[i++])
	{
		printf("%s\n", argv[i-1]);
	}

	printf("====================================\n");
	
	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}