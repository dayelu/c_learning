#include <stdio.h>
#include "names.h"
#include "names.h"
#include "functions.h"

int main(int argc, char const *argv[])
{
	greet();
	printf("%d\n", SLEN);
	names winner = {"Less", "Ismoor"};
	printf("The winner is %s %s\n", winner.first, 
		winner.last);
	return 0;
}