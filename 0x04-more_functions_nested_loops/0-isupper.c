#include "main.h"

/**
 * _isupper - function to check if c is upper
 *
 * @c: input for function
 *
 * Return: 1 if it is upper , 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
