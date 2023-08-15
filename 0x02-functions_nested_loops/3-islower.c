#include "main.h"

/**
 * _islower - function to check if the character is lowercase
 *
 * @c: check the input of function
 *
 * Return: return 1 if 'c' is lowercase
 *         return 0 otherwise (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
