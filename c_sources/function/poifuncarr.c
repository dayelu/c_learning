#include <stdio.h>

int puls(int num);
int minus(int num);

int main(int argc, char const *argv[])
{
	int (*pfunc[5]) (int)  = {puls,minus};;
	int num = 99;

	printf("%d\n", pfunc[0](num));
	printf("%d\n", pfunc[1](num));

	return 0;
}

int puls(int num)
{
	return ++num;
}

int minus(int num)
{
	return --num;
}