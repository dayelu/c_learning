#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	printf("%d\n", arr[8]);
	printf("Ԫ��arr[2]���ڴ��ַ:%p\n", &arr[2]);
	printf("Ԫ��arr[3]���ڴ��ַ:%p\n", &arr[3]);
	printf("Ԫ��arr[6]���ڴ��ַ:%p\n", &arr[6]);
	printf("Ԫ��arr[2]��Ԫ��arr[3]�ڴ��ַ֮��ľ���:%p\n",&arr[3]-&arr[2]);
	printf("Ԫ��arr[2]��Ԫ��arr6]�ڴ��ַ֮��ľ���:%p\n", &arr[6]-&arr[2]);
	printf("int �������ݵĳ��ȣ�%ld\n", sizeof(int));

	printf("Ԫ��arr[2]���ڴ��ַ:%d\n", &arr[2]);
	printf("Ԫ��arr[3]���ڴ��ַ:%d\n", &arr[3]);
	printf("%d\n",(&arr[3]-&arr[2]));

	printf("%p\n",0x7ffc85489d0c - 0x7ffc85489d08);
	return 0;
}