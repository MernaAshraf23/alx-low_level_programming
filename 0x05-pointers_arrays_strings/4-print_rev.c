#include "main.h"

/**
 * print_rev - function that print a string in reverse
 *
 * @s: char (string) parameter for function
*/

void print_rev(char *s)
{
	int i =  0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
