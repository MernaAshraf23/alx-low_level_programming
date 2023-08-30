#include "main.h"

/**
 * _puts_recursion - functoin that prints a string without loops
 *
 * @s: pointer to string
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
