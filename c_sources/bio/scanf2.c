#include <stdio.h>
#include <stdlib.h>
/*
 12.44,12,46,nihofs  ⇲
*/
int main(int argc, char const *argv[])
{
	char *str = NULL;
	str = (char *)malloc(10 * sizeof(char));
	int value = 0;
	int value2 = 0;
	double fnum = 0.0;

	printf("Please input a float number,two integer numbers and a string.\n");
	// int count = scanf("%s %lf,%*d,%3d",str,&fnum,&value);
	// int count = scanf("%lf,%s,%*d,%3d",&fnum,str,&value);
	int count = scanf("%lf,%*d,%3d,%s",&fnum,&value,str);

	printf("fnum = %lf.\n", fnum);
	printf("value = %d.\n", value);
	printf("value2 = %d.\n", value2);
	printf("str = %s.\n", str);
	printf("There is %d numbers be inputed scanf().\n", count);
	free(str);
	str = NULL;
	return 0;
}