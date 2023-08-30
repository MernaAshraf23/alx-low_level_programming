#include "main.h"
#include <stdio.h>

/**
 * check_isPrime - function that check the primr num
 * @n: input parameter
 * @x: input parameter
 * Return: int
*/

int check_isPrime(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (check_isPrime(n, x + 1));
}

/**
 * is_prime_number - function that find the prime num
 *                                         without loops
 * @n: int parameter
 *
 * Return: if the num is prime return 1,
 *            if not return 0
*/

int is_prime_number(int n)
{
	return (check_isPrime(n, 2));
}
