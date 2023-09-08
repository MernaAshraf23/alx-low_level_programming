#include "main.h"
#include <stdlib.h>

/**
 * _memset - function that fill a memory
 * @s: pointer
 * @b: char parameter
 * @n: int parameter (num of bytes)
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char ptr;

	while (n--)
		*s++ = b;

	return (ptr);
}

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
	char *memo;

	if (size == 0 || nmemb == 0)
		return (NULL);
	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	_memset(memo, 0, size * nmemb);

	return (memo);
}
