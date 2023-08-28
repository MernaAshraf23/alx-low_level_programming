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
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		i++;
	}
	return ('\0');
}
