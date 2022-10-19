#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int c, boolean, boolean2;
	long int c1, c2, fc, fc2, c11, c22;
		c1 = 1;
		c2 = 2;
		boolean =  boolean2 = 1;
		printf("%ld, %ld", c1, c2);
			for (c = 0; c < 96; c++)
			{
				if (boolean)
				{
					fc = c1 + c2;
					printf(", %ld", fc);
					c1 = c2;
					c2 = fc;
				}
				else
				{
					if (boolean2)
					{
						c11 = c1 % 1000000000;
						c22 = c2 % 1000000000;
						c1 = c1 / 1000000000;
						c2 = c2 / 1000000000;
						boolean2 = 0;
					}
					fc2 = (c11 + c22);
					fc = c1 + c2 + (fc2 / 1000000000);
					printf(", %ld", fc);
					printf("%ld", fc2 % 1000000000);
					c1 = c2;
					c11 = c22;
					c2 = fc;
					c22 = (fc2 % 1000000000);
				}
				if (((c1 + c2) < 0) && boolean == 1)
					boolean = 0;
			}
			printf("\n");
			return (0);
}

