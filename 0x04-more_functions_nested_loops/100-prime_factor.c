#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long i, largest;
	long num = 612852475143;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			largest = num / i;
			num = largest;
		}
	}
	printf("%d\n", largest);
	return (0);
}
