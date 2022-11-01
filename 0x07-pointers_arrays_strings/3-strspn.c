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
	int a = 0, b;
	int pairs = 0;

	while (s[a] != '\0') /*iterate through string*/
	{
		for (b = 0; accept[b] != '\0'; b++) /*iterate through target*/
		{
			if (s[a] == accept[b]) /*record & break at first match*/
			{
				pairs++;
				break;
			}

			if (accept[b + 1] == '\0' && s[a] != accept[b])
				return (pairs); /*return if idx doesn't match*/
		}

		a++;
	}

	return (pairs); /* return num if all match till end */

}
