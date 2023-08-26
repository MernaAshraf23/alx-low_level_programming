#include "main.h"

/**
 * rot13 - function that encode a string using rot13
 *
 * @str : string parameter for function
 *
 * Return: string
*/

char *rot13(char *str)
{
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataRot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data[i])
			{
				str[i] = dataRot[j];
				break;
			}
		}
	}
	return (str);
}
