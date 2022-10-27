#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters0 of
 * a string to uppercase.
 * @n: input string.
 *
 * Return: dest.
 */

char *string_toupper(char *n)
{
	int best = 0;

	while (*(n + best) != '\0')
	{
		if ((*(n + best) >= 97) && (*(n + best) <= 122))
			*(n + best) = *(n + best) - 32;
		best++;
	}

	return (n);
}
