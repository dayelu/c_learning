#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str1[] = "To be or not to be,";
	char str2[] = "this is a question.";
	// char str3[] = strcpy(str1,str2);

	printf("%s\n", strcat(str1,str2));	//��str2��ӵ�str2ĩβ�����ҷ���str1

	printf("strcat(str1,str2)��str1��ֵ��%s\n", str1);
	printf("strcat(str1,str2)��str2��ֵ��%s\n", str2);
	//printf("%s\n", strncat(str1,str2,10));
	//printf("strncat(str1,str2,10)��str1��ֵ��%s\n", str1);

	printf("str1 �Ĵ�С��%d��str1�ĳ��ȣ�%d\n", sizeof str1, strlen(str1));
	printf("str2 �Ĵ�С��%d��str2�ĳ��ȣ�%d\n", sizeof str2, strlen(str2));

	if (sizeof str1 >= sizeof str2)		//ʹ��ʱ��Ҫ�жϱ�ȡ�������鳤���Ƿ����ȡ������Ĵ�С
	{
		printf("%s\n", strcpy(str1,str2));
		printf("strcpy(str1,str2)��str1��ֵ��%s\n", str1);
	}else{
		printf("��ȡ��������������С\n");
	}
	/* ������������һ�����ͣ�ָ����Ҫ���Ƶ��ַ����� */
	/* ��Դ�ַ�����Ҫȡ�����ַ������ĳ��ȴ���Ҫ���Ƶ��ַ�������ȡ�����ַ�������ʱ�� */
	/*strncpy()�����Ͳ�����Ŀ���ַ���������ַ� '\0' ,���Ŀ���ַ���û����ֹ�ַ��ͻ����������� */
	printf("%s\n", strncpy(str1,str2,5));

	char str3[] = "hello";
	char str4[] = "very good";

	printf("%s\n", strncpy(str4,str3,5));
	printf("strncpy(str4,str3,5)��str4��ֵ��%s\n", str4 );
	printf("%s\n", strncpy(str3,str4,3));
	printf("strncpy(str3,str4,3)��str4��ֵ��%s\n", str4 );

	const char greet[] = "hello,world!";

	char hello[] = {'h','e','l','l','o',',','w','o','r','l','d','!'};
	printf("�ַ��� \"%s\"�Ĵ�С�� %d\n",greet, sizeof greet );
	printf("�ַ��� \"%s\"�ĳ����� %d\n",greet, strlen(greet) );
	printf("�ַ����� \"%s\"�Ĵ�С�� %d\n",hello, sizeof hello );

	return 0;
}