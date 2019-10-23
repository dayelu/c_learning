#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	char *filename = "myfile.bin";

	long *data = (long *)malloc(sizeof(long));
	// long data[10];
	FILE *ppfile = fopen(filename, "rb");
	fread(data, sizeof(long), 3, ppfile);
	printf("%ld\n", *(data + 2));
	fclose(ppfile);
	return 0;
}