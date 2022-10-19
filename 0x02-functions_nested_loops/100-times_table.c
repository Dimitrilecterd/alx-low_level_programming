#include "main.h"
/**
 * print_times_table -  a function that prints the n times table
 * starting with 0.
 *
 * @n: number times table
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int g, h, xy;
		if (n >= 0 && n <= 15)
		{
			for (g = 0; g <= n; g++)
			{
				_putchar(48);
				for (h = 1; h <= n; h++)
				{
					xy = g * h;
					_putchar(44);
					_putchar(32);
					if (xy <= 9)
					{
						_putchar(32);
						_putchar(32);
						_putchar(xy + 48);
					}
					else if (xy <= 99)
					{
						_putchar(32);
						_putchar((xy / 10) + 48);
						_putchar((xy % 10) + 48);
					}
					else
					{
						_putchar(((xy / 100) % 10) + 48);
						_putchar(((xy / 10) % 10) + 48);
						_putchar((xy % 10) + 48);
					}
				}
				_putchar('\n');
			}
		}
}
