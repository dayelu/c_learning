#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argv[1])
	{
		// char *pcmd = (char *)malloc(10 * sizeof(char));
		char command1[50] = "gcc ";
		strcat(command1, argv[1]);
		char command2[] = ".c -o ../../exectue/";
		strcat(command1, command2);
		strcat(command1, argv[1]);
		char command3[] = " && ./../../exectue/";
		strcat(command1, command3);
		strcat(command1, argv[1]);
		
		system(command1);
		// printf("%s\n", command1);
	}else{
		printf("缺少参数！\n");
	}
	
	return 0;
}