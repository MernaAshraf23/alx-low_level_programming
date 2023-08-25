#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: string parameter for function
 * @src: string parameter for function
 * @n: input parameter
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
