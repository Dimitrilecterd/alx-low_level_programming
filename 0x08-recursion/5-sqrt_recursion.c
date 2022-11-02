#include "main.h"

/**
 * _sqrt_operation - Finds the natural square root of an of a number.
 * @a: the input number.
 * @b: the root
 *
 * Return: return -1 If n does not have a natural square root
 */

int _sqrt_operation(int a, int b)
{
	if ((b * b) == a)
		return (b);
	if (b == a / 2)
		return (-1);

	return (_sqrt_operation(a, b + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square
 * root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 * If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int b = 0;

	if (n < 0)
		return (-1);

	return (_sqrt_operation(n, b));
}
