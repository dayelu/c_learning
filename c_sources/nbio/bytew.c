#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	char *filename = "myfile.bin";

	FILE *pfile = fopen(filename, "wb");
	long pdata[] = {212323L,2123L,42435L};
	int num_items = sizeof(pdata) / sizeof(long);
	size_t  wcount = fwrite(pdata, sizeof(long), num_items, pfile);
	printf("%ld\n", wcount);

	long *data = (long *)malloc(sizeof(long));
	// long data[10];
	FILE *ppfile = fopen(filename, "rb");
	fread(data, sizeof(long), 3, ppfile);
	printf("%ld\n", *(data + 2));
	fclose(ppfile);
	return 0;
}