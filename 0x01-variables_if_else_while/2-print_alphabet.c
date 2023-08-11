#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print the alphabet in lower case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
