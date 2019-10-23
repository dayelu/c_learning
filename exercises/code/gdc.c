#include<stdio.h>

int gdc(int m,int n);

int main()
{
	int c=gdc(27,9);
	printf("The greatest factor is: %d\n",c);
	printf("The zuixiao gongbeishu is: %d\n",27*9/c);
	return 0;
}

int gdc(int m,int n)
{
	int k = 0;
	int res = 0;
	if(m<=n)
	{
		k=m;
	}else{
		k=n;
	}

	for(int i=1;i<=k;i++)
	{
		if(!(m%i) && !(n%i))
		{
			res=i;
		}
	}
	return res;
}
