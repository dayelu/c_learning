/* Program 8.4 The change taht doesn't */
#include <stdio.h>
// int change(int number);		/* Function prototype */

int main(int argc, char const *argv[])
{
	int number = 10;
	int result = 0;
	result = change(number);
	printf("\nIn main, result = %d\tnubmer = %d\n", result, number);
	return 0;
}

/* Definition of the function change() */
int change(int number)
{
	number = 2 * number;
	printf("\nIn function change, number = %d\n", number);
	return number;
}