#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argv[1])
	{
		char command1[] = "gcc ";
		strcat(command1, argv[1]);
		char command2[] = ".c -o ../../exectue/";
		strcat(command1, command2);
		strcat(command2, argv[1]);
		char command3[] = " && ./../../exectue/";
		strcat(command1, command3);
		strcat(command3, argv[1]);
		
		system(command1);
		// printf("%s\n", command1);
	}else{
		printf("缺少参数！\n");
	}
	
	return 0;
}