#include <stdio.h>

int puls(int num);
int content(int (*pfunc) (int),int num);

int main(int argc, char const *argv[])
{
	int num = 99;
	printf("%d\n", content(puls,num));
	return 0;
}

int content(int (*pfunc) (int),int num)
{
	return pfunc(num);
}

int puls(int num)
{
	return ++num;
}