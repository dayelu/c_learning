#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define	MAX_SIZE 100

// char *gets_in(char *str)
// {
// 	printf("%p\n", str);
// 	puts("请输入一串字符：");
// 	fgets(str, 5, stdin);
// 	printf("%s\n", str);
// 	return str;
// }


char *read_line(char const *filename)
{
	FILE *pfile = fopen(filename,"r");
	char *str = NULL;
	str = (char *)malloc(50 * sizeof(char));
	
	if(str)
	{
		fgets(str, MAX_SIZE - 1, pfile);
		return str;

	}else{
		return NULL;
	}
	// fclose(pfile);
}

int main(int argc, char const *argv[])
{
	char *filename = "test2.txt";

	char *str = read_line(filename);
	printf("%s\n", str);
	// char *s = "nihao";
	// printf("%p\n", s);
	// gets_in(s);			//为什么使用调用函数就会出错呢？是不是跟 绝对不返回 函数 本地指针原则有关？
	puts("请输入一串字符：");
	fgets(str, 1000, stdin);	//读取第二个参数，即指定输出长度减一个，设为k个字符，若k大于给定字符串str的长度则输出整个字符串。
	printf("%s\n", str);
	
	return 0;
}
