#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Plese input a integer number:");
	int num = 0; 
	scanf("%d",&num);
	int result = recursion(num);
	printf("The result is: %d\n", result);
	return 0;
}


int recursion(int num)
{
	if (num == 1)
	{
		return num;
	}else{
		return num + recursion(num - 1);
	}
}