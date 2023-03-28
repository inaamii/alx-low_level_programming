#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src
 *
 * @dest : destination
 * @src : source
 *
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int ln = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}

	while (i < ln)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);


}
