#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int best = 0;
	int best2 = 0;

	while (*(dest + best) != '\0')
	{
		best++;
	}
	while (best2 >= 0)
	{
		*(dest + best) = *(src + best2);
		if (*(src + best2) == '\0')
			break;
		best++;
		best2++;
	}
	return (dest);
}
