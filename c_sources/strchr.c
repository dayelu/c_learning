#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[] = "You are beautiful.";
	char key = 'b';
	char key_str[] = "beaut";
	// int key = 'b';
	char *pionter = NULL;
	pionter = strchr(str,key);

	printf("char %c was found : %c\n", key, *pionter);

	if(strstr(str,key_str) != NULL){
		printf("str \"%s\" was found.\n", key_str);
	}
	
	return 0;
}