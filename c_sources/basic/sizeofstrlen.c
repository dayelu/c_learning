#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char hi[] = {"long time no see."};
	char h[] = "long time no see.";
	printf("%s\n", hi);
	printf("%s\n", h);
	char hello[10];
	// hello = "good morning?";
	char *str;
	str = "how are you?";
	printf("The sizeof str is: %d\n", sizeof str); 
	printf("The strlen(str) is: %d\n", strlen(str)); 
	return 0;
}