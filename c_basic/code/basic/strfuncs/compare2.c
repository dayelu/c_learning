#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	char *str1 = "abOut you";
	char *str2 = "About";
	bool result = (str1 == str2);

	int res = strcmp(str1,str2);
	int res1 = strncmp(str1,str2,0);
	int res2 = strncmp(str1,str2,1);
	int res3 = strncmp(str1,str2,2);
	int res4 = strncmp(str1,str2,3);

	printf("The result of (str1 > str2) is: %f\n", result);
	printf("The result of strcmp(str1,str2) is:%d\n", res);
	printf("The result of strncmp(str1,str2,0); is:%d\n", res1);
	printf("The result of strncmp(str1,str2,1); is:%d\n", res2);
	printf("The result of strncmp(str1,str2,2); is:%d\n", res3);
	printf("The result of strncmp(str1,str2,3); is:%d\n", res4);
	printf("The result of ('a' - 'A') is: %d\n", ('a' - 'A'));

	return 0;
}