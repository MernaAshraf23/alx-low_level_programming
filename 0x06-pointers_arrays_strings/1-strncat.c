#include "main.h"

/**
 * _strncat - function that concatenates two strings,
 *                      it will use at most n bytes
 *
 * @dest: first string parameter
 * @src: second string parameter
 * @n: number of byres
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1] != '\0')
		c1++;

	c2 = 0;
	while (c2 < n && src[c2] != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}

	dest[c1] = '\0';
	return (dest);
}
