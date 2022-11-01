#imclude "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string to search
 * @accept: the target to search from.
 *
 * Return: the number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bin = 0;
	int xin;

	while (*s)
	{
		for (xin = 0; accept[xin]; xin++)
		{
			if (*s == accept[xin])
			{
				bin++;
				break;
			}

			else if (accept[xin + 1] == '\0')
				return (bin);
		}

		s++;
	}

	return (bin);
}
