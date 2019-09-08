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
		struct horse *next;
	};

	struct horse *first = NULL;
	struct horse *current = NULL;
	struct horse *previous = NULL;

	char test = '\0';

	for ( ; ; )
	{
		printf("\nYou want to enter details of a%s horse (Y or N)? ",
				first != NULL ? "nother ":" ");
		scanf(" %c", &test);
		if (tolower(test) == '\n')
		{
			break;
		}

		/* Allocate memory  for a structure */
		current = (struct horse*)malloc(sizeof(struct horse));

		if (first = NULL)
		{
			first = current;	/* Set pointer to first horse */
		}

		if (previous != NULL)
		{
			previous->next = current;	/* Set next pointer for previous horse */
		}

		printf("\nEnter the name of the horse: ");
		scanf("%s", current->name); 	/* Read the horse's a name */

		printf("\nHow old is %s? ",current->age);
		scanf("%d", &current->age);

		printf("\nHow high is %s ( in hands )? ",current->height);
		scanf("%d", &current->height);

		printf("\nWho is %s's mother? ",current->name);
		scanf("%d", &current->mother);

		printf("\nWho is %s's father? ",current->name);
		scanf("%d", &current->father);

		current->next = NULL;		/* In case it's the last */
		previous = current;			/* Save address of last horse */
	}

	/* Now tell them what we know. */
	current = first;

	while(current != NULL)
	{	/* Output the data* */
		printf("\n\n%s is %d year old, %d hands high,", current->name, current->age, current->height);
		printf(" and has %s and %s as parents.\n", current->father, current->mother);

		previous = current;		/* Saved then we can free*/
		current = current->next;
		free(previous);
	}
 
	return 0;
}