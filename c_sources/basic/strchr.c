#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[] = "You are beautiful.";
	// char key = 'b';
	char key_str[] = "beaut";
	int key = 'b';
	char *pionter = NULL;
	pionter = strchr(str,key);
	char *pkey = NULL;
	pkey = strrchr(str,key);

	printf("char %c was found by function \"strchr()\": %c\n", key, *pionter);
	printf("char %c was found by function \"strrchr()\": %c\n", key, *pkey);

	if(strstr(str,key_str)){
		printf("str \"%s\" was found.\n", key_str);
	}
	
	return 0;
}