#include "main.h"

/**
 * _strcat - fubction that concates two strings
 *
 * @dest: a string parameter for function
 * @src: the second string parameter for the function
 *
 * Return: pointers to recall string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;

	while (dest[c1] != '\0')
		c1++;

	c2 = 0;

	while (src[c2] != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}

	dest[c1] = '\0';
	return (dest);
}
