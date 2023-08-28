#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer to return the character
 * @c: character to be found
 *
 * Return: if the character found return s,
 *         if not found return NULL
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
