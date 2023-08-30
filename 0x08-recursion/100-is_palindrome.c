#include "main.h"

/**
 * last_indx - function find the last index
 * @s: pointer to string
 * Return: int
*/

int last_indx(char *s)
{
	int last = 0;

	if (*s > '\0')
		last += last_indx(s + 1) + 1;
	return (last);
}

/**
 * check - function that check palindrome
 * @s: string parameter
 * @start: int parameter
 * @end: int parameter
 * @mod: int parameter
 * Return: int (0 or 1)
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}

/**
 * is_palindrome - function thar find if is palindrome
 * @s: ponter to string
 * Return: int
*/

int is_palindrome(char *s)
{
	int end = last_indx(s);

	return (check(s, 0, end - 1, end % 2));
}
