#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *str = NULL;
	str = (char *)malloc(10 * sizeof(char));
	int value = 0;
	int value2 = 0;
	float fnum = 0.0f;

	printf("before run scanf(), the size of fnum is: %d\n", sizeof fnum);
	printf("Please input a float number,two integer numbers and a string.\n");
	int count = scanf("%lf,%*d,%3d,%s",&fnum,&value,&value2,str);
	printf("after run scanf(), the size of fnum is: %d\n", sizeof fnum);
	free(str);
	str = NULL;
	printf("fnum = %lf.\n", fnum);
	printf("value = %d.\n", value);
	printf("value2 = %d.\n", value2);
	printf("str = %s.\n", str);
	printf("There is %d numbers be inputed scanf().\n", count);

	// char ch1,ch2;
	// printf("Please enter a char:\n");
	// scanf(" %c",ch1);
	// printf("Please enter a char:\n");
	// scanf("%c",ch1);
	// printf("ch1 = %c.\nch2 = %c.\n", ch1, ch2);
	return 0;
}