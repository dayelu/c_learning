#include<stdio.h>

int main()
{
	enum color {
		red,yellow,blue=4,green,white
	} c1,c2;
	c1=yellow;
	c2=white;
	printf("%d,%d\n",c1,c2);
	return 0;
}                                                                                                      
