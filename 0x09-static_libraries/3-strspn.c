#include "main.h"

/**
 * _strspn - a function that gets lengh of a prefix substring
 *
 * @s : the initial segment
 * @accept : limit of bytes
 *
 * Return: return number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	i++;
	}
	return (i);
}
