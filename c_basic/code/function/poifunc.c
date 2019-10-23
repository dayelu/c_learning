#include <stdio.h>

int puls(int num);
int main(int argc, char const *argv[])
{
	int (*pfunc) (int);
	int num = 99;

	pfunc = puls;
	printf("%d\n", pfunc(num));
	return 0;
}

int puls(int num)
{
	return ++num;
}