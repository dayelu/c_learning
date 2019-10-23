#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *pfile = fopen("hh.txt","r");
	if (pfile == NULL)
	{
		perror("hh.txt");
		exit(EXIT_FAILURE);
	}
	
	return 0;
}