#include "main.h"

/**
 * print_line - prints straight line n times, using ('_')
 * @n: the number of ('_') to be printed
 * Return: no return.
 */

void print_line(int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
