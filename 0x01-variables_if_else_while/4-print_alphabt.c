#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print alphabet except q&e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchat(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
