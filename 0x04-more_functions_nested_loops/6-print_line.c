#include "main.h"

/**
 * print_line - function that draw a strait line
 *
 * @n: is the number of times the character _ should be printed
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
