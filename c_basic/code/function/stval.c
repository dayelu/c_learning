#include <stdio.h>

int increase();
int aincrease();

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 4; ++i)
	{
		printf("the %d th time run increase(), static value = %d\n", i, increase());
		printf("the %d th time run aincrease(), auto value = %d\n", i, aincrease());
	}
}

int increase()
{
	static int sinner = 8;	/* static value only inital once when the function run */
	return ++sinner;
}

int aincrease()
{
	int ainner = 8;
	return ++ainner;
}