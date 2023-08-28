#include "main.h"

/**
 * _strpbrk - function that searches a string for any of set
 *                                 of bytes
 *
 * @s: pointer to return result
 * @accept: string parameter to match
 *
 * Return: return a pointerto the byte in s that matches one
 *         of bytes in accept, or return NULL if not found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
