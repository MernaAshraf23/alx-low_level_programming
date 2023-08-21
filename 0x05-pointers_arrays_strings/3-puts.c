#include "main.h"

/**
 * _puts - function that prints a string following by new line
 *                            to stdout
 *
 * @str: string parameter for function
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
