#include <stdio.h>

/**
 * _sqrt - print the square root
 *
 * @n: input for function
 *
 * Return: return square root of n
*/

double _sqrt(double n)
{
	float sqrt, tmp;

	sqrt = n / 2;
	tmp = 0;

	while (sqrt != rmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long i, largest;
	long num = 612852475143;

	for (i = 1; i <= _sqrt(num); i++)
	{
		if (num % i == 0)
			largest = num / i;
	}
	printf("%d\n", largest);
	return (0);
}
