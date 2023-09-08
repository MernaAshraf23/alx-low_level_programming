#include "main.h"

/**
 * _memset - function that fill a memory
 * @s: pointer
 * @b: char parameter
 * @n: int parameter (num of bytes)
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

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
	void *memo;

	if (size == 0 || nmemb == 0)
		return (NULL);
	memo = malloc(sizeof(int) * nmemb);

	if (memo == 0)
		return (NULL);

	_memset(memo, 0, sizeof(int) * nmemb);

	return (memo);
}
