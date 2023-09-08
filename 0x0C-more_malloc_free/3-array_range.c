#include "main.h"

/**
 * array_range - function that create an array of int
 *
 * @min: int parameter (starting)
 * @max: int parameter (max)
 *
 * Return: array of int
*/

int *array_range(int min, int max)
{
	int i, length;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);

	if (!ptr)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = min++;
	return (ptr);
}
