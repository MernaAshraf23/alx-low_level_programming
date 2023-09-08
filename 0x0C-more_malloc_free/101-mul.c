#include "main.h"

/**
 * _puts - function that print a string
 * @str: pointer to string parameter
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _stoi - function that converts a string ro an int
 * @s: string parameter
 * Return: int
*/

int _stoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
			sign *= -1;
	}
	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}

/**
 * print_int - function that print an int
 * @n: int parameter
 * Return: Alwayz 0 (Success)
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, resp;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
}

/**
 * main - function that print the result
 * @argc: int parameter
 * @argv: list parameter
 * Return: Always 0 (Success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_stoi(argv[1]) * _stoi(argv[2]));
	_putchar('\n');

	return (0);
}
