#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s : string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int f = 0;
	char swap;

	while (s[f] != '\0')
	{
		f++;
	}

	f = f - 1;
	while (i < f)
	{
		swap = s[i];
		s[i] = s[f];
		s[f] = swap;
		i++;
		f--;
	}
}
