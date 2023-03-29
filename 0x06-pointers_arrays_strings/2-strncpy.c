#include "main.h"

/**
 * _strncpy - a function that copiers a string
 *
 * @dest : char pointer of destination
 * @src : char pointer of sourcei
 * @n : nember from src
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
