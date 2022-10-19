#include <stdio.h>
/**
 * main - Prints the add of the even-valued
 *
 * Return: 0
 */
int main(void)
{
	long int x1, x2, fx, afx;
		x1 = 1;
		x2 = 2;
		fx = afx = 0;
		while (fx <= 4000000)
		{
			fx = x1 + x2;
			x1 = x2;
			x1 = fx;
			if ((x1 % 2) == 0)
			{
				afx += x1;
			}
		}
		printf("%ld\n", afx);
		return (0);
}
