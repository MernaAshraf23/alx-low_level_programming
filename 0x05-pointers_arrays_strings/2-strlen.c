#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: char (string) parameter for function
 *
 * Return: the length of string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}
