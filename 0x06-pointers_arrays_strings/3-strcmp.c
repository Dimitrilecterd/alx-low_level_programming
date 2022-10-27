#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if s1 and s2 are equals,otherwise another number
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] = s2[c]);
		}
	c++;
	}
	return (0);
}
