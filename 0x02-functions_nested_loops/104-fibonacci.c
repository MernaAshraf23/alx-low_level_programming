#include "main.h"

/**
 * numLength - return the length of string
 *
 * @num: takes as function input
 *
 * Return: number of digits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, initial0s;
	unsigned long fib1 = 1, fib2 = 2, sum, mx = 100000000;
	unsigned long f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%ld", f1o);
		initial0s = numLength(mx) - 1 - numLength(fib1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%ld", fib1);

		sum = (fib1 + fib2) % mx;
		sumo = f1o + f2o + (fib1 + fib2) / mx;
		fib1 = fib2;
		f1o = f2o;
		fib2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
