#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: array length
 * @size: int parameter (size of each element)
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
