#include "main.h"

/**
 * rev_string - function that reverse a string
 *
 * @s: char (string) parameter for function
*/

void rev_string(char *s)
{
	int i;
	int count = 0;
	char tmp = s[0];

	while (s[count] = != '\0')
		count++;

	for (i = 0; i < count ; i++)
	{
		count--;
		tmp = s[i];
		s[i] = s[count];
		s[count] = tmp;
	}
}
