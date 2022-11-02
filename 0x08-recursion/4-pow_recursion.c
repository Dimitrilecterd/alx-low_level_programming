#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised
 *  to the power of y.
 * @x: the value to be raised
 * @y: the power
 *
 * Return: returns the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int bin = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	bin *= _pow_recursion(x, y - 1);
	return (bin);
}
