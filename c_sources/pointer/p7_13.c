/* Program 7.13 Arrays of Pointer to Strings */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const size_t BUFFER_LEN = 128;	/* Length of input buffer */
const size_t NUM_P = 100;		/* maximum number of strings */

int main(int argc, char const *argv[])
{
	char buffer[BUFFER_LEN];	/* Input buffer */
	// char *pS[NUM_P] = {NULL};	//error: variable-sized object may not be initialized 
	// excess elements in array initializer 
	char *pS[NUM_P]; 			/* Array of string pointers */
	char *pbuffer = buffer;		/* Poiinter to buffer */
	int i = 0;					/* Loop counter */

	printf("\nYou can nter up to %u messages each up to %u characters.", NUM_P, BUFFER_LEN-1);
	
	/* Read the strings from the keyboard */
	for (i = 0; i < NUM_P; ++i)
	{
		pbuffer = buffer; 		/* Set pointer to beginning of buffer. */

		printf("\nEnter %s message, or press Enter to end\n", i > 0 ? "another" : "a");
		/* Read a string of up to BUFFER_LEN characters */
		while((pbuffer-buffer < BUFFER_LEN-1) && 
			((*pbuffer++ = getchar()) != '\n'));
		
		/* Check for empty line indicating end of input */
		if ((pbuffer-buffer) < 2)
		{
			break;
		}

		/* Check for string too long */
		if ( ( pbuffer - buffer ) == BUFFER_LEN && *(pbuffer-1) != '\n')
		{
			printf("\nString too long - maximum %d characters allowed.", BUFFER_LEN);
			i--;
			continue;
		}
		*(pbuffer - 1) = '\0';		/* Add terminator */
		pS[i] = (char*)malloc(pbuffer-buffer);	/* Get memory for string */
		if (pS[i] == NULL)
			{
				printf("\nOut of memory - ending program");
				return 1;			/* ...Exit if we didn't */
			}
			/* Copy string from buffer to new memory */	
			strcpy(pS[i],buffer);
	}
	
	/* Output all the strings */
	printf("\nIn reverse order, the  strings you entered are :\n");
	while(--i >= 0)
	{
		printf("%s\n", pS[i]);	/* Display strings last to first */
		free(pS[i]);			/* Release the memory we got */
		pS[i] = NULL;			/* Set pointer back to NULL for safety */
	}

	return 0;
}