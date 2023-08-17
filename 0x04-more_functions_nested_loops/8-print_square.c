#inculde "main.h"

/**
 * print_square - function that print a square
 *
 * @size: size of the square
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row, column;

		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
