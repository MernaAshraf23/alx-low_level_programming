#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 *
 * @a: int parameter for function
 * @b: int parameter for function
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
