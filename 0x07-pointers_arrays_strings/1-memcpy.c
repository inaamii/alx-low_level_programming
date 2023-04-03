#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @n : bytes from memory area
 * @src : memory area of destination
 * @dest : memory area of source
 *
 * Return: return a pointer of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}

	return (dest);
}
