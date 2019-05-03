#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[2][2] = {
				{1,2},
				{3,4}
				};

	int b[2][2][2] = {
					{
						{1,2},
						{3,4}						
					},
					{
						{5,6},
						{7,8}						
					}
				};

	printf("%d\n", b[1][1][1]);
	printf("%d\n", *(*(*(b+1)+1)+1));

	printf("%d\n", a[1][1]);
	printf("%d\n", *(*(a+1)+1));

	printf("%p\n", *(a+1));
	printf("%p\n", &a[1]);
	printf("%d\n", **(a+1));

	printf("%d\n", *a[0]);


	printf("%d\n",sizeof a);
	printf("%d\n",sizeof a[0]);
	printf("%d\n",sizeof a[0][0]);

	int *ptr = (int *)&a;
	int *paf = (int *)&a[0];

	printf("%d\n", **(a));
	printf("%p\n", paf);

	printf("%d\n", *((int *)&a));
	printf("%p\n\n", ptr);


	char *p = "hello,world!";
	
	printf("%s\n", p);

	printf("%d\n", *(ptr+3));

	printf("%d\n", *(ptr+1));

	return 0;
}