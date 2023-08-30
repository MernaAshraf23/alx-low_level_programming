#include "main.h"

/**
 * _pow_recursion - function that return the value x raised
 *                             to the power of y without loops
 * @x: int parameter
 * @y: the power parameter
 *
 * Return: int value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
