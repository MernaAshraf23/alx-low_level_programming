#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int div = 2;
	long int num = 612852475143;
	long int largest;

	while (num != 0)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			largest = num;
			num = num / div;
			if (num == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}
	}

	return (0);
}
