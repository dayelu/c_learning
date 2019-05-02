#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str1[] = "To be or not to be,";
	char str2[] = "this is a question.";
	// char str3[] = strcpy(str1,str2);

	printf("%s\n", strcat(str1,str2));	//把str2添加到str2末尾，并且返回str1

	printf("strcat(str1,str2)后str1的值：%s\n", str1);
	printf("strcat(str1,str2)后str2的值：%s\n", str2);
	//printf("%s\n", strncat(str1,str2,10));
	//printf("strncat(str1,str2,10)后str1的值：%s\n", str1);

	printf("str1 的大小：%d，str1的长度：%d\n", sizeof str1, strlen(str1));
	printf("str2 的大小：%d，str2的长度：%d\n", sizeof str2, strlen(str2));

	if (sizeof str1 >= sizeof str2)		//使用时需要判断被取代的数组长度是否大于取代数组的大小
	{
		printf("%s\n", strcpy(str1,str2));
		printf("strcpy(str1,str2)后str1的值：%s\n", str1);
	}else{
		printf("被取代数组比替代数组小\n");
	}
	/* 第三个参数是一个整型，指定了要复制的字符数。 */
	/* 当源字符串（要取代的字符串）的长度大于要复制的字符串（被取代的字符串）数时， */
	/*strncpy()函数就不会在目标字符串中添加字符 '\0' ,因此目标字符串没有终止字符就会出现以下情况 */
	printf("%s\n", strncpy(str1,str2,5));

	char str3[] = "hello";
	char str4[] = "very good";

	printf("%s\n", strncpy(str4,str3,5));
	printf("strncpy(str4,str3,5)后str4的值：%s\n", str4 );
	printf("%s\n", strncpy(str3,str4,3));
	printf("strncpy(str3,str4,3)后str4的值：%s\n", str4 );

	const char greet[] = "hello,world!";

	char hello[] = {'h','e','l','l','o',',','w','o','r','l','d','!'};
	printf("字符串 \"%s\"的大小是 %d\n",greet, sizeof greet );
	printf("字符串 \"%s\"的长度是 %d\n",greet, strlen(greet) );
	printf("字符数组 \"%s\"的大小是 %d\n",hello, sizeof hello );

	return 0;
}