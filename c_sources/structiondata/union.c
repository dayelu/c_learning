#include <stdio.h>
int main(int argc, char const *argv[])
{
	union u_example
	{
		float decval;
		int pnum;
		double my_value;
	}U1, U2;
	// U2 = 3.14f;
	union u_example U3;
	U3 = 3.14;
	U1.my_value = 125.5;
	U1.pnum = 10;
	U1.decval = 100.5f;

	printf("decval = %f pnum = %d my_value = %lf\n", U1.decval, U1.pnum, U1.my_value);

	return 0;
}