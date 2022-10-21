#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14, 10 times
 * Return: no return.
 */

void more_numbers(void)
{
	int num, b;

	for (b = 0; b <= 9; b++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
