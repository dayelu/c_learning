#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool change(char *const pmessage);

int main(int argc, char const *argv[])
{
	char *pmessage = NULL;
	pmessage = (char *)malloc( 10 * sizeof(char));
	if (pmessage)
	{
		pmessage = "yipinyixiaozuiwoxin";
	}else{
		printf("memory is not enough.\n");
	}

	change(pmessage);

	return 0;
}

bool change(char *const pmessage)
{
	printf("%s\n", pmessage);
	// pmessage = "jinxihexi";			// error: assignment of read-only parameter 'pmessage'
	// printf("%s\n",pmessage );
	return true;
}
