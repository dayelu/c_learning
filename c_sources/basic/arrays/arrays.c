#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num[3][4] = {
		{1,2,3,4},
		{11,12,13,14},
		{21,22,23,24},			//最后一行后的逗号可写可不写，在gcc中
	};


	int numbers[2][3][4] = {
		{
			{1,2,3,4},
			{11,12,13,14},
			{21,22,23,24},
		},

		{
			{31,32,33,34},
			{111,112,113,114},
			{211,212,213,214},
		}
	};

	printf("元素num[0][0]的值是：%d\n", num[0][0]);

	printf("元素numbers[0][2][3]的值是：%d，内存地址是：%p\n", numbers[0][2][3],&numbers[0][2][3]);
	printf("元素numbers[1][0][0]的值是：%d，内存地址是：%p\n", numbers[1][0][0],&numbers[1][0][0]);

	return 0;
}