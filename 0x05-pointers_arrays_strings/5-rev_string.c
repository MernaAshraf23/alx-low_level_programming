#include "main.h"

/**
 * rev_string - function that reverse a string
 *
 * @s: char (string) parameter for function
*/

void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i ; j++)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}
}
