#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str1[] = "hello,world!";
	char str2[] = "hello,moon!";
	//strncmp(str1,str2,n)
	if (strcmp(str1,str2) < 0)
	{	
		printf("%s\n", str1);
		printf("%s\n", str2);
		printf("%d\n", strcmp(str1,str2));
		printf("str1 < str2\n");
	}else if (strcmp(str1,str2) > 0)
	{
		printf("%s\n", str1);
		printf("%s\n", str2);
		printf("%d\n", strcmp(str1,str2));
		printf("str1 > str2\n");
	}else{
		printf("%s\n", str1);
		printf("%s\n", str2);
		printf("%d\n", strcmp(str1,str2));
		printf("str1 = str2\n");
	}
	return 0;
}