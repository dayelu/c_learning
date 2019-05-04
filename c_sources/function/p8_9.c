#include <stdio.h>

long *IncomePuls(long* pPay);

int main(int argc, char const *argv[])
{
	long your_pay = 30000L;
	long* pold_pay = &your_pay;
	long* pnew_pay = NULL;
	pnew_pay = IncomePuls(pold_pay);

	printf("Old pay = $%ld\n", *pold_pay);
	printf("New pay = $%ld\n", *pnew_pay);

	return 0;
}

long* IncomePuls(long* pPay)
{
	long pay = 0;
	pay = *pPay + 10000;
	return &pay;
}