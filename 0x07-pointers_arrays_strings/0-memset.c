#include "main.h"

/**
 * _memset - a function that fills memory whith a constant byts.
 *
 * @n : first byte of memory
 * @s : pointer
 * @c : the constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	while (m < n)
	{
		s[m] = b;
	m++;
	}

	return (s);
}
