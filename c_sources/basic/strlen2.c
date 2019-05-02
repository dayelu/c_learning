#include <stdio.h>
int main(int argc, char const *argv[])
{
	const char greet[] = "hello,world!";
	/* assignment of read-only location 'greet' [enabled by default] */
	//greet = "你好，世界！";
	char hello[] = {'h','e','l','l','o',',','w','o','r','l','d','!'};
	printf("字符串 \"%s\"的大小是 %d\n",greet,sizeof greet );
	printf("字符数组 \"%s\"的大小是 %d\n",hello,sizeof hello );
	return 0;
}