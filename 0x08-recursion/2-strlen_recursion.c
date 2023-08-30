#include "main.h"

/**
 * _strlen_recursion - function that returns the length of
 *                                    a string without loops
 * @s: pointer to string
 *
 * Return: int length
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
