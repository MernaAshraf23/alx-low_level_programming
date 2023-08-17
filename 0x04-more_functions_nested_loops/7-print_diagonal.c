#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: is the number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space <= line; space++)
			{
				if (line == space)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
