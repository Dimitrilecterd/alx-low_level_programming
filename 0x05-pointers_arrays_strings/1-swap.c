#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a:First argument to be swapped.
 * @b:second argument to be swapped.
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = *a;
}
