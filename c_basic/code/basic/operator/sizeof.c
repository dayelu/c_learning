#include <stdio.h>
int main(int argc, char const *argv[])
{
	double num = 10.0;
	double values[] = {1.6,2.5,3.6,5.5,9.3};
	printf("%ld\n", sizeof num);
	printf("%ld\n", sizeof(num));
	printf("%ld\n", sizeof(double));
	// printf("%ld\n", sizeof double);		//Error
	printf("%ld\n", sizeof values);
	printf("%ld\n", (sizeof values) / (sizeof(double)));

	return 0;
}