#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */

void print_diagonal(int n)
{
	int b, c;

	for (b = 0; b < n; b++)
	{
		for (c = 0; c < b; c++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (b < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
