#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a =100;
	int b = 101;
	// int *p = &a;
	int *const p = &a;			//指针本身不可改变，但是指向指针的变量可改变
	// const int *p = &a;		//指针锁指向的变量不可改变，但是指针可以改变
	printf("%d\n", a);
	printf("%d\n", *p);
	// p = &b;
	*p = 99;
	printf("%d\n", a);
	printf("%d\n", *p);
	return 0;
}