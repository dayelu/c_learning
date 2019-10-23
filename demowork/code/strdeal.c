#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(int argc, char const *argv[])
{	
	char *filename = "test.txt";
	FILE *pfile = fopen(filename,"r");
	//char *str = {NULL};
	char *str = NULL;
	str = (char *)malloc(50 * sizeof(char));
	if(str)
	{
	while(fgets(str, MAX_SIZE - 1, pfile) != NULL){
	//while(fgets(str, printf("%d",strlen(str)), pfile) != NULL){
		//printf("strlenth is: %d\n",strlen(str));
		printf("%s", str);
		}
	}else{
		printf("memory is empty");
	}
	//printf("\n");
	return 0;
}
