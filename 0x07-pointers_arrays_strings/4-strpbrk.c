#include "main.h"
#define NULL 0

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: the string
 * @accept: the target string to be checked
 *
 * Return: index of string.
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		for (y = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}

		}

		a++;
	}

	return (NULL);

}
