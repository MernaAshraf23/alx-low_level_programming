#include "main.h"

/**
 * print_numbers - function that print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + 48);
		num++;
	}
	_putchar("\n");

	return (0);
}
