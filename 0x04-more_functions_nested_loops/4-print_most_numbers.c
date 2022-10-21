#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 58; ch < 68; ch++)
	{
		if (ch != 60 && ch != 62)
			_putchar(ch);
	}
	_putchar('\n');
}
