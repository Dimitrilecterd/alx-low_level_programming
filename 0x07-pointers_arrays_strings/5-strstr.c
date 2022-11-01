#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @needle: the string to be checked
 * @haystack: the target string to check from.
 *
 * Return:  a pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[0])
		{
			x = a, b = 0;

			while (needle[b] != '\0')
			{
				if (haystack[x] == needle[b])
					x++, b++;

				else
					break;
			}

			if (needle[b] == '\0')
			{
				return (haystack + 1);
			}
		}

		a++;
	}

	return ('\0');
}
