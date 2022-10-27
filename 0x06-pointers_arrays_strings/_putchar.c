#include <unistd.h>

/**
 * _putchar - writes the charactet b to the stdout
 * @b: character to be printed
 * Return: 1
 */

int _putchar(char b)
{
	return (write(1, &b, 1));
}
