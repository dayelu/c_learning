#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *str = "How are you? Are you happy now?";
	char key = 'a';		//the second param is int or char type, a single character.
	char *key_str = "happy";
	printf("The search string is:\n%s\n", str);
	printf("The key word is:\n%c\n", key);
	printf("The key string is:\n%s\n", key_str);
	char *result = NULL;
	result = strchr(str, key);
	printf("The result of strchr(str, key) is: %p\n", result);
	printf("After exectuing strchr(str, key), the next letter of result is: %c\n", *(result + 1));

	char *res = NULL;
	res = strrchr(str, key);
	printf("The result of strrchr(str, key) is: %p\n", res);
	printf("After exectuing strrchr(str, key), the next letter of res is: %c\n", *(res + 1));

	if(strstr(str,key_str)){
		printf("str \"%s\" was found.\n", key_str);
	}

	return 0;
}