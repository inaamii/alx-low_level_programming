#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str : string to change
 *
 * Return: return the string
 *
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sow[14] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}

		for (j = 0; j < 14; j++)
		{
			if (str[i] == sow[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}

		}
	i++;
	}

	return (str);
}
