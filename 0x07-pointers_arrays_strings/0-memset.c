#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: input parameter
 * @b: constant parameter
 * @n: int parameter num of bytes
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
