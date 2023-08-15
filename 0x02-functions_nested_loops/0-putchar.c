#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char arr[] = "_putchar";

	for (int ch = 0; ch < 8; ch++)
		_putchar(arr[ch]);
	_putchar('\n');

	return (0);
}
