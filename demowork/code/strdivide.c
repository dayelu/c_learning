#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(int argc, char const *argv[])
{	
	char *filename = "test.txt";
	FILE *pfile = fopen(filename,"r");
	char *str = NULL;
	str = (char *)malloc(50 * sizeof(char));
	if(str)
	{
		while(fgets(str, MAX_SIZE - 1, pfile) != NULL){
			printf("%s", str);
			char *p = strrchr(str,'.');
			printf("%s", p);	
			}
	}else{
		printf("memory is empty");
	}
	return 0;
}
