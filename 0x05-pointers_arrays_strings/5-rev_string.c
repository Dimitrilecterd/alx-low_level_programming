#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: input string.
 * Return: 0
 */

void rev_string(char *s)
{
	char rv = s[0];
	int g = 0;
	int j;

	while (s[g] != '\0')
		g++;
	for (j = 0; j < g; j++)
	{
		g--;
		rv = s[j];
		s[j] = s[g];
		s[g] = rv;
	}
}
