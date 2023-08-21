#include "main.h"

/**
 * *_strcpy - function that copies the string pointed
 *
 * @dest: char parameter for function
 * @src: char parameter for function
 *
 * Description: copy the string pointed to by src,
 *                including the terminating null byte
 *                to the buffer pointed to by dest
 *
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
