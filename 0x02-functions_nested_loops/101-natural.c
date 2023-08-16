#include "main.h"

/**
 * main - Entry point
 *
 * Description: compute the sum of all number
 *                that are multiples by 3,5 below 1024
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
