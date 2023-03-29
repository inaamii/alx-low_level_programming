#include "main.h"

/**
 * _strcmp - a function that compares two strikngs
 *
 * @s1 : char pointer input
 * @s2 : char pointer input
 *
 * Return: return s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			return (cmp);
		}
	i++;
	}

	return (0);
}
