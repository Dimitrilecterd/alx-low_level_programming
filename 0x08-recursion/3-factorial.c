#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number to find
 *
 * Return: return -1 to indicate an error
 */

int factorial(int n)
{
	int bless = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	bless *= factorial(n - 1);
	return (bless);
}
