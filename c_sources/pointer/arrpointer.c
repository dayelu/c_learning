#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char multiple[] = "a string";
	char *p = multiple;

	printf("p = %p\n", p);
	printf("&multiple[0] = %p\n", &multiple[0]);
	for (int i = 0; i < strlen(multiple); ++i)
	{
		printf("multiple[%d] = %c * (p+%d) = %c; &multiple[%d] = %p p+%d = %p\n",
			i,multiple[i],i,*(p+i),i,&multiple[i],i,p+i);
	}
	return 0;
}