#include <stdio.h>
int main(int argc, char const *argv[])
{
	float fno = 0.0f;
	// int num1, num2, num3;
	int num;
	// printf("\n");
	scanf("%f,%d",&fno,&num);
	// scanf("%f,%o,%x,%X",&fno,&num1,&num2,&num3);
	printf("fno = %f.\nfno(e) = %e.\nnum(o) = %o.\n"
			"num(x) = %x.\nnum(X) = %X.\n",fno,fno,num,num,num);
	return 0;
}