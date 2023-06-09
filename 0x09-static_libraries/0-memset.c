#include "main.h"

/**
 * _memset - a function that fills memory whith a constant byts.
 *
 * @n : first byte of memory
 * @s : pointer
 * @b : the constant byte
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	m = 0;
	while (m < n)
	{
		s[m] = b;
	m++;
	}

	return (s);
}
