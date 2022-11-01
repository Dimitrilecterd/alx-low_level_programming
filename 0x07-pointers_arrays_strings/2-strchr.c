#include "main.h"
#define NULL 0

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string to search
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0' && s[x] != c)
		x++;
	if (s[x] == c)
		return (&s[x]);

	else
		return (NULL);
}
