#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @str : string of input
 *
 * Return: return str
 */

char *rot13(char *str)
{
	int i = 0;
	int j;
	char i13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char o13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; i13[j] != '\0'; j++)
		{
			if (str[i] == i13[j])
			{
				str[i] = o13[j];
				break;
			}
		}
	i++;
	}

	return (str);
}
