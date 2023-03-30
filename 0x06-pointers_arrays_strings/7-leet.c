#include "main.h"

/**
 * leet - a function that ecodes a string into 1337
 *
 * @str : string
 *
 * Return: return s
 *
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char l[11] = "AaEeOoTtLl";
	char n[11] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j < 11; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = n[j];
			}
		}
	i++;
	}

	return (str);
}
