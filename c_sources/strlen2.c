#include <stdio.h>
int main(int argc, char const *argv[])
{
	const char greet[] = "hello,world!";
	/* assignment of read-only location 'greet' [enabled by default] */
	//greet = "��ã����磡";
	char hello[] = {'h','e','l','l','o',',','w','o','r','l','d','!'};
	printf("�ַ��� \"%s\"�Ĵ�С�� %d\n",greet,sizeof greet );
	printf("�ַ����� \"%s\"�Ĵ�С�� %d\n",hello,sizeof hello );
	return 0;
}