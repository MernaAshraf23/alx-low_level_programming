#include "main.h"

/**
 * print_to_98 - prints from n to 98, followed by a new line,
 *               separated by a comma, followed by a space
 *
 * @n: input for the function
 *
*/

void print_to_98(int n)
{
	int count;

	if (n < 98)
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	else
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	printf("98\n");
}
