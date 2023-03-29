#include "main.h"

/**
 * _strncat - a function that concatenates tow strings
 *
 * @dest : char pointer of destination
 * @src : char pointer of sourcei
 * @n : nember of char concatinat
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int i = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

		while (i < n && src[i] != '\0')
		{
			dest[c] = src[i];
			c++;
			i++;
		}

	dest[c] = '\0';

	return (dest);
}
