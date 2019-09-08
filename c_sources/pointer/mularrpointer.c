#include <stdio.h>
int main(int argc, char const *argv[])
{
	char board[3][3] = {
							{'1','2','3'},
							{'4','5','6'},
							{'7','8','9'}
						};
	printf("address of board : %p\n", board);
	printf("address of board[0] : %p\n", board[0]);
	printf("address of board[0][0] : %p\n", &board[0][0]);

	printf("\naddress of board : %p\n", board);
	printf("address of *board : %p\n", *board);

	return 0;
}