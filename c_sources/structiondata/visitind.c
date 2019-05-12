#include <stdio.h>
int main(int argc, char const *argv[])
{
	// int *p;
	// *p = 18;
	typedef struct cat
	{
		char *name;
		int age;
		char sex;
	} Miao;

	Miao littleBlack, *orange;
	littleBlack.name = "little black";
	littleBlack.age = 4;
	littleBlack.sex = 1;

	struct cat littleWhite;

	littleWhite.name = "little white";
	littleWhite.age = 3;
	littleWhite.sex = 0;

	printf("%s\n", littleWhite.name);
	printf("%d\n", littleBlack.age);
	orange = &littleBlack;
	orange->name = "little orange";
	printf("%d\n", (*orange).age);

	return 0;
}