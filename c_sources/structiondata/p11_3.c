#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	struct horse
	{
		int age;
		int height;
		char name[20];
		char father[20];
		char mother[20];	
	};

	struct horse *phorse[50];
	int hcount = 0;
	char test = '\0';

	for (int i = 0; i < 50; ++i)
	{
		printf("\nYou want to enter details of a%s horse (Y or N)? ",
				hcount ? "another ":" ");
		scanf(" %c", &test);
		if (tolower(test) == '\n')
		{
			break;
		}

		phorse[hcount] = (struct horse*)malloc(sizeof( struct horse ) );
		printf("\nEnter the name of the horse: ");
		scanf("%s", phorse[hcount]->name );

		printf("How old is %s? ",phorse[hcount]->name );
		scanf("%d", &phorse[hcount]->age );

		printf("\nHow high is %s (in hands)? ", phorse[hcount]->name );
		scanf("%d",&phorse[hcount]->height );

		printf("\nWho is %s's father? ",phorse[hcount]->name );
		scanf("%s", &phorse[hcount]->father );

		printf("\nWho is %s's mother? ",phorse[hcount]->name );
		scanf("%s",&phorse[hcount]->mother );

	}


	for (int i = 0; i < hcount; ++i)
	{
		printf("\n\n %s is %d years old, %d  hands high,", phorse[i]->name, phorse[i]->age, phorse[i]->height);
		printf(" and has %s and %s as parent.\n", phorse[i]->father, phorse[i]->mother);
		free(phorse[i]);
	}

	return 0;
}