#include "main.h"

/**
 * _isdigit - function chdeck if c is digit
 *
 * @c: input for function
 *
 * Return: 1 if c is digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
