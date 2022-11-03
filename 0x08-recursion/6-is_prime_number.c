#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator
 *
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime(int n, int c)
{
	if (n % c == 0)
		return (0);
	if (c == n / 2)
		return (1);

	return (is_prime(n, c + 1));
}
