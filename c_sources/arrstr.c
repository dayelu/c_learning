#include <stdio.h>
int main(int argc, char const *argv[])
{
	char sayings[][32] = {
		"good morning",
		"good afternoon",
		"good evening"
	};

	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n", sayings[i]);
	}

	return 0;
}