#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	printf("%d\n", arr[8]);
	printf("元素arr[2]的内存地址:%p\n", &arr[2]);
	printf("元素arr[3]的内存地址:%p\n", &arr[3]);
	printf("元素arr[6]的内存地址:%p\n", &arr[6]);
	printf("元素arr[2]与元素arr[3]内存地址之间的距离:%p\n",&arr[3]-&arr[2]);
	printf("元素arr[2]与元素arr6]内存地址之间的距离:%p\n", &arr[6]-&arr[2]);
	printf("int 类型数据的长度：%ld\n", sizeof(int));

	printf("元素arr[2]的内存地址:%d\n", &arr[2]);
	printf("元素arr[3]的内存地址:%d\n", &arr[3]);
	printf("%d\n",(&arr[3]-&arr[2]));

	printf("%p\n",0x7ffc85489d0c - 0x7ffc85489d08);
	return 0;
}