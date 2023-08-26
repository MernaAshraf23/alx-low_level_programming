#include "main.h"

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
	int i, j, k;

	k = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf(" ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int k = *(b + k + i);

			if (k < 32 || k > 132)
				k = ".";
			printf("%c", k);
		}
		printf("\n");
		k += 10;
	}
}