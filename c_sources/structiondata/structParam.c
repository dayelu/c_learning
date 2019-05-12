#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	struct cat
	{
		int age;
		char *name;
		float weight;
	} LuoCat= {2,"Luo Cat",2.5},*pblack;

	pblack = &LuoCat;
	// LuoCat = {2,"Luo Cat",2.5};	// 错误的初始化格式格式

	int getAgeP(struct cat const *pcat)
	{
		// return (*pcat).age;
		return pcat->age;
	}

	int getAge(struct cat Miao)
	{
		return Miao.age;
	}

	printf("age = %d\n",getAge(LuoCat));
	printf("age = %d\n",getAgeP(pblack));

	return 0;
}