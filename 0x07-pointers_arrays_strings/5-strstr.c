#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string parameter
 * @needle: nput parameter
 *
 * Return: a pointer of the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *b = needle;

		while (*p == *b && *b != '\0')
		{
			p++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return ('\0');
}
