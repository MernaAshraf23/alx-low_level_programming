#include "main.h"

/**
 * reverse_array - function that reverse the content of an array
 *                              of int
 * @a: parameter (array)
 * @n: parameter number of element in array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
