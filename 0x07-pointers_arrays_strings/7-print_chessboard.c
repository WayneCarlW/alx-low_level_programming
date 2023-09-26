#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard
 *
 * @a: Pointer to a character in a string
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c ", a[row][col]);
		}
		_putchar(10);
	}
}
