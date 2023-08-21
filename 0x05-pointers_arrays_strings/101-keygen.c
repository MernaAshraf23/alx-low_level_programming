#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: generate random password
 *
 * Return : Always 0 (Success)
*/

int main(void)
{
	int sum;
	char ch;

	srand(time(NULL));
	while (sum <= 2645)
	{
		ch = rand() % 128;
		sum += ch;
		_putchar(ch);
	}
	putchar(2772 - sum);
	return (0);
}
