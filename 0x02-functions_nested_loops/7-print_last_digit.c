#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a num
 * @n:number to compute last digit.
 * Return:last digit.
 */
int print_last_digit(int n)
{
	int ld = n % 10;
		if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');

	return (0);
}
