#include "main.h"

/**
 * print_line - prints straight line n times, using ('_')
 *
 * @n: the number of ('_') to be printed
 *
 * Return: no return.
 */

void print_line(int n)
{
	int gen;

	if (n > 10)
	{
		for (gen = 0; gen < n; gen++)
			_putchar('_');
	}
	_putchar('\n');
}
