#include "main.h"

/**
 * _strstr - a function that locates a substrin
 *
 * @haystack : string
 * @needle : the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int p = 0;
	int ln = 0;

	for (ln = 0; needle[ln] != '\0'; ln++)
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (j < ln)
		{
			while (haystack[i] == needle[j])
			{
				if (j == 0)
				{
					p = i;
				}
				if (j == ln - 1)
				{
					return (haystack + p);
				}

			i++;
			j++;
			}

		}
	}
	return (0);
}
