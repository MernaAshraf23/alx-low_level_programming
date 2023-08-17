#include "main.h"

/**
 * more_numbers - function that print numbers from 0 to 14, 10 times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int line, num, count;

	for (line = 1; line <=  10; line++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (num > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
