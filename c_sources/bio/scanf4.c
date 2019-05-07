#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{	
	char *str = NULL;
	char ch = NULL;
	char ch1 = NULL;
	str = (char *)malloc(5 * sizeof(char));
	if (str)
	{
		printf("Please a serial characters and a char.\n");
		scanf(" %c, %c, %[^,]", &ch, &ch1, str);
		printf("str = %s\n", str);
		printf("ch = %c\n", ch);
		printf("ch1 = %c\n", ch1);
		free(str);
		str = NULL;
	}else{
		printf("memory is empty.\n");
	}
	return 0;
}