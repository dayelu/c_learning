#include <stdio.h>  /* For command line input and output */
#include <limits.h> /* For limits on integer types */
#include <float.h>  /* For limits on floating-point types */
int main()
{
    printf("Variables of type char store values from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Variables of type unsigned char store values from 0 to %u\n", UCHAR_MAX);
    printf("Variables of type short store values from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Variables of type unsigned short store values from 0 to %u\n", USHRT_MAX);
    printf("Variables of type int store values from %d to %d\n", INT_MIN, INT_MAX);
    printf("Variables of type unsigned int store values from 0 to %u\n", UINT_MAX);
    printf("Variables of type long store values from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Variables of type unsigned long store values from 0 to %lu\n", ULONG_MAX);
    printf("Variables of type long long store values from %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Variables of type unsigned long long store values from 0 to %llu\n", ULLONG_MAX);

    printf("\nVariables of the smallest non-zero value of type float is %.3e", FLT_MIN);
    printf("\nVariables of the largest value of type float is %.3e", FLT_MAX);
    printf("\nVariables of the smallest non-zero value of type double is %.3e", DBL_MIN);
    printf("\nVariables of the largest value of type double is %.3e", DBL_MAX);
    printf("\nVariables of the smallest non-zero value of type long double is %.3Le", LDBL_MIN);
    printf("\nVariables of the largest value of type long double is %.3Le", LDBL_MAX);

    printf("\nVariables of the type float provide %u decimal digits precision.", FLT_DIG);
    printf("\nVariables of the type double provide %u decimal digits precision.", DBL_DIG);
    printf("\nVariables of the type long double provide %u decimal digits precision.\n", LDBL_DIG);

    return 0;
}
