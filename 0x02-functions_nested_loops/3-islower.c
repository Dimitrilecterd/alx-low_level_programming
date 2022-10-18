#include "main.h"
/**
 * _isalpha - checks if a character is  lowcase
 * @c: the character being checked
 * Return: 1 if the character is lowcase otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
