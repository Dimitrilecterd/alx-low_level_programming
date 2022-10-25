#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: input string.
 * Return: 0
 */

void puts2(char *str)
{
	int l = 0;

	for (; str[l] != '\0'; l++)
	{
		if ((l % 2) == 0)
			_putchar(str[l]);
		else
			continue;
	}
	_putchar('\n');
}
