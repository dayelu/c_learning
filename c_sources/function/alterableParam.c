#include <stdio.h>
#include <stdarg.h>

double average(double num1, double num2,...);

int main(int argc, char const *argv[])
{
	printf("The length of int is: %ld, the length of double is: %ld\n", sizeof(int), sizeof(double));

	double num1 = 59.4;
	double num2 = 67.7;
	double num3 = 100.1;
	// double num3 = 100;
	double num4 = 89.1;
	double result = average(num1,num2,num3,num4);

	printf("result is: %lf\n",result);
	return 0;
}

double average(double num1, double num2,...)
{
	double sum = num1 + num2;
	double count = 2;
	double value = 0.0;
	double result = sum / count;

	va_list parg;

	va_start(parg,num2);

	while((value = va_arg(parg,double) )!= 0.0)
	{
		sum += value;
		result = sum / ++count;
	}

	va_end(parg);

	return result;
}