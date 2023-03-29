#include "main.h"

/**
 * _strcat - a function that concatenates tow strings
 *
 * @dest : char pointer of destination
 * @src : char pointer of source
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int i = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

		i = 0;
		while (src[i] != '\0')
		{
			dest[c] = src[i];
			c++;
			i++;
		}
		dest[c] = '\0';

	return (dest);
}
