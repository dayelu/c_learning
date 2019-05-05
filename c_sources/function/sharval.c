#include <stdio.h>

int shareint = 8;

int increase(int *);
int aincrease(int *);
int sincrease(int);

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 4; ++i)
	{
		printf("the %d th time run increase(), value = %d\n", i, increase(&shareint));
	}
	printf("\n");
	for (int i = 0; i < 4; ++i)
	{
		printf("the %d th time run aincrease(), value = %d\n", i, aincrease(&shareint));
	}
	printf("\n");
	for (int i = 0; i < 4; ++i)
	{
		printf("the %d th time run sincrease(), value = %d\n", i, sincrease(shareint));
	}
}

int increase(int *value)
{
	return ++*value;
}

int aincrease(int *value)
{
	return ++*value;
}

int sincrease(int value)
{
	return ++value;
}