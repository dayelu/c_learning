#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <wchar.h>

#define MAX_SIZE 100


char *read_line(char const *filename)
{
	// char *filename = "test.txt";
	FILE *pfile = fopen(filename,"r");
	//char *str = {NULL};
	char *str = NULL;
	str = (char *)malloc(50 * sizeof(char));
	if(str)
	{
		while(fgets(str, MAX_SIZE - 1, pfile) != NULL){
		//while(fgets(str, printf("%d",strlen(str)), pfile) != NULL){
			//printf("strlenth is: %d\n",strlen(str));
			// wprintf(L"%ls", str);
			printf("%s", str);
			}
	}else{
		printf("memory is empty");
	}
	// perror(filename);
	// fclose(pfile);	// 为什么一关闭就报错？？？？？？?
}


int main(int argc, char const *argv[])
{	
	char *filename = "test.txt";
	read_line(filename);

	printf("%ld\n", sizeof(size_t));
	printf("%ld\n", sizeof(int));
	printf("%ld\n", sizeof(long));
	return 0;
}
