#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - function return ascii
 * @n: input
 * Return: ascii
*/

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - function print hexes value
 * @b: string to print
 * @start: parameter
 * @end: parameter
*/
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - function print ascii
 * @b: string to print
 * @start: parameter
 * @end: parameter
*/

void printASCII(char *b, int start, int end)
{
	int ch;
	int i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - function that print the content
 *                of size bytes of the buffer pointed by b
 * @b: buffer input
 * @size: size input
 *
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
