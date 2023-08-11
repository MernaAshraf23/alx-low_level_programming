#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print combination of two 2-digit num
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int firstDigit = 0;
	int secondDigit;

	while (firstDigit <= 9)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 9)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstDigit + secondDigit != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
