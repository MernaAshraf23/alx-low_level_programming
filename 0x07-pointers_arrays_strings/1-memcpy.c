#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory area parameter
 * @src: input parameter (string)
 * @n: num of bytes to be copied
 *
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
