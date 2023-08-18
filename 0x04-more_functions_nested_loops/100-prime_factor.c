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
 * largest_prime_factor - function to find the largest prime factor of num
 *
 * @num: input for function
*/

void largest_prime_factor(long int num)
{
	int prmNum, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmNum = 3; prmNum <= _sqrt(num); prmNum += 2)
	{
		while (num % prmNum == 0)
		{
			num = num / prmNum;
			largest = prmNum;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
