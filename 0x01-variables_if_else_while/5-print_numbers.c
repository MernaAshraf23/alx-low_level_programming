#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print umbers base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
