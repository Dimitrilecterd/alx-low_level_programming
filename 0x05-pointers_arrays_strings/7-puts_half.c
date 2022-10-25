#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input string.
 * Return: 0
 */

void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	str -= (length / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putcahr('\n');
}
