#include <stdio.h>
// int change(int *pnumber);
int main(int argc, char const *argv[])
{
	int number = 10;
	int result = 0;
	int *pnumber = &number;
	result = change(pnumber);
	printf("\nIn main, result = %d\tnubmer = %d\n", result, number);
	printf("\n%d",*pnumber);
	return 0;
}

int change(int *pnumber)
{
	*pnumber = 2 * (*pnumber);
	printf("\nIn function change, number = %d\n", *pnumber);
	pnumber = NULL;
	return 1;
}