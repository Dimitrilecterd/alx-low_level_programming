#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @m: input string.
 *
 * Return: dest
 */

char *cap_string(char *m)
{
	int b = 0;

	while (m[b])
	{
		while (!(m[b] >= 'a' && m[b] <= 'z'))
			b++;
		if (m[b - 1] == ' ' ||
			m[b - 1] == '\t' ||
			m[b - 1] == '\n' ||
			m[b - 1] == ',' ||
			m[b - 1] == ';' ||
			m[b - 1] == '.' ||
			m[b - 1] == '!' ||
			m[b - 1] == '?' ||
			m[b - 1] == '*' ||
			m[b - 1] == '(' ||
			m[b - 1] == ')' ||
			m[b - 1] == '{' ||
			m[b - 1] == '}' ||
			b == 0)
			m[b] -= 32;

		b++;
	}

	return (m);
}
