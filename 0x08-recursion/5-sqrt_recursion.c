#include "main.h"
#include <stdio.h>

/**
 * sqrt - function retuen square
 * @n: input parameter
 * @x: input parameter value
 * Return: int
*/

int sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqrt(n, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural
 *                      square root of num without loops
 * @n: int parameter
 *
 * Return: int value
*/

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
