#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @n: bytes of the memory area
 * @src: the source
 * @dest: the destination
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int bin = n;

	if (bin > 0)
	{
		int b;

		for (b = 0; b < bin; b++)
			dest[b] = src[b];
	}
	return (dest);
}
