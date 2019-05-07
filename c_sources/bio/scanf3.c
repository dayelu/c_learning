#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{	
	char *str = NULL;
	str = (char *)malloc(5 * sizeof(char));
	if (str)
	{
		printf("Please a serial characters.\n");
		scanf("%[2,3,5,r,t,A,h]",str);
		printf("str = %s\n", str);
		free(str);
		str = NULL;
	}else{
		printf("memory is empty.\n");
	}
	return 0;
}