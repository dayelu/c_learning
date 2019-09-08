#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct
	{
		int age;
		char name[20];
	} Miao;

	struct horse
	{
		int age;
		int height;
	} Sliver;

	struct horse duantui[20]; 

	struct xuhanhorse
	{
		int age;
		int height;
		char name[20];
		char mother[20];
		char father[20];
	} Dobbin =  {
				24, 17, "Dobbin", "Trigger", "Flossie"
				};

	struct xuhanhorse Piebald, Bandy;

	struct xuhanhorse Trigger = {
			30, 15, "Trigger", "Smith", "Wesson"
			};

	Dobbin.age = 12;

	struct xuhanhorse *phorse;

	phorse = &Dobbin;
	int *p_age = &Dobbin.age;

	printf("%p\n",phorse);
	printf("%p\n",p_age);
	
	printf("The size of xuhanhorse is: %d\n", sizeof(Piebald));
	printf("The size of xuhanhorse is: %d\n", sizeof(struct xuhanhorse));
	printf("The Dobbin's age is: %d.\n", Dobbin.age);

	return 0;
}