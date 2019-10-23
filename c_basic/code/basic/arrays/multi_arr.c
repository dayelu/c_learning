#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[3][3] = {
		{1,3,4},
		{2,5,8},
		{12,6,9}
	};
	printf("%p\n", &arr[0][2]);
	printf("%p\n", &arr[1][0]);
	return 0;
}