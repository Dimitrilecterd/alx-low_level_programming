#include "main.h"
/**
 * times_table -  a function that prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int num, jog, prod;
		for (num = 0; num <= 9; num++)
		{
			_putchar('0');
			for (jog = 1; jog <= 9; jog++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * jog;

				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
}
