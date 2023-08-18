#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int i, largest;
	long int num = 612852475143;

	for (i = 0; i <= num ; i++)
	{
		if (num % i == 0)
		{
			if (num == i)
			{
				printf("%d\n", i);
				break;
			}
			largest = num / i;
			num = largest;
		}
	}
	return (0);
}
