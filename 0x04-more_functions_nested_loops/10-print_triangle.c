#include "main.h"

/**
 * print_triangle - function that print a triangle
 *
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	int row, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((row + base) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
