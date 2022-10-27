#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @m: input string.
 *
 * Return: dest
 */

char *cap_string(char *m)
{
	int best = 0, b;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(m + best) >= 97 && *(m + best) <= 122)
		*(m + best) = *(m + best) - 32;
	best++;
	while (*(m + best) != '\0')
	{
		for (b = 0; b < 13; i++)
		{
			if (*(m + best) == sep_words[b])
			{
				if ((*(m + (best + 1)) >= 97) && (*(m + (best + 1)) <= 122))
					*(m + (best + 1)) = *(m + (best + 1)) - 32;
				break;
			}
		}
		best++;
	}
	return (m);
}
