#include "main.h"

/**
 * _strlen-Finds the length of a string.
 * @s:String pointer to the string whose length is to be found.
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
