#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: 2D array
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; a++)
	{
		for (c = 0; c < 8; b++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
