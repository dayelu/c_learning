#include <stdio.h>
int main()
{
	#line 90 "digitmap.y"
    printf("current line number %d ,current file %s\n", __LINE__, __FILE__);

    printf("TIME is %s,DATE is %s\n", __TIME__, __DATE__);

    #if __STDC_VERSION__ != 201112111111L
    #error Not C11
    #endif

	return 0;
}