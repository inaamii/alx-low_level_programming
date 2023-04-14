#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb : array size
 * @size : number of bytes
 *
 * Return: pointer allocated, NULL if fails
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	if (s == 0)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}
	return (s);


}
