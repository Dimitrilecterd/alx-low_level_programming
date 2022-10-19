#include <stdio.h>
/**
 * main - Prints the add of the even-valued
 *
 * Return: 0
 */
int main(void)
{
	long int x1, x2, fn, afn;
		x1 = 1;
		x2 = 2;
		fn = afn = 0;
		while (fn <= 4000000)
		{
			fn = x1 + x2;
			x1 = x2;
			x1 = fn;
			if ((x1 % 2) == 0)
			{
				afn += x1;
			}
		}
		printf("%ld\n", afn);
		return (0);
}
