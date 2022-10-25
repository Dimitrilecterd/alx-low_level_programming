#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of
 * integers.
 * @a: input array.
 * @n: input n elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
