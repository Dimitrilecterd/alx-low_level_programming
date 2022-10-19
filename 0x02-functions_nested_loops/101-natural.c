#include <stdio.h>
/**
 *  main - Prints natural numbers below 1024 that are
 *  multiplies of 3 or 5
 *
 *  Return: 0.
 */
int main(void)
{
	int c, d;
		for (c = 1; c < 1024; c++)
		{
			if ((c % 3) == 0 || (c % 5) == 0)
				d += c;
		}
		printf("%d\n", d);
		return (0);
}
