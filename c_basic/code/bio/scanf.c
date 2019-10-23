#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	static int count;
	int value = 0;
	char *str = NULL;
	str = (char *)malloc(10 * sizeof(char));

	int *pval = NULL;
	pval = &value;
	printf("Please input a number and a string,divide by ',':\n");
	
	if (str)
	{
		count = scanf("%d,%s", pval,str);
	}else{
		printf("memory is not enough.\n");
	}

	printf("value = %d.\n", value);
	printf("%d\n", 'L');
	printf("There is %d data input scanf().\n", count);
	printf("str = %s.\n", str);

	free(str);
	str = NULL;
	return 0;
}