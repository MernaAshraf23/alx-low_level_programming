#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: int parameter
 *
 * Return: pointer to the array or NULL
*/

void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);

	if (memo == NULL)
		exit(98);

	return (memo);
}
