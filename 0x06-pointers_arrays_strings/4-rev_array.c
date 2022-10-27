#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array.
 * @n: number of elements of the array.
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b, c, temp;

	for (b = 0; b < n - 1; b++)
	{
		for (c = b + 1; c > 0; c--)
		{
			temp = *(a + c);
			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = temp;
		}
	}
}
