#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv)
{
	int exit_status = EXIT_SUCCESS;

	FILE *input;

	/*
	** 当还更多文件名时...
	*/
	while( *++argv != NULL )
	/*
	** 试图打开这个文件.
	*/
	{
		input = fopen( *argv, "r");

		if ( input = NULL )
		{
			perror( *argv );
			exit_status = EXIT_FAILURE;
			continue;
		}

	/*
	** 正在处理这个文件
	*/

		/*
		** 关闭这个文件（期望不出错）.
		*/		
		if (fclose(input) != 0)
		{
			perror("fclose");
			exit(EXIT_FAILURE);
		}

	}
	return exit_status;
}