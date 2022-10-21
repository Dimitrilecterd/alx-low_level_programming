#include "main.h"

/**
 * print_square - prints hashes squares.
 *
 * @size: size of the square.
 * Return: no return.
 */

void print_square(int size)
{
	int b, c;

	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar(35);
		}
		if (b != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
