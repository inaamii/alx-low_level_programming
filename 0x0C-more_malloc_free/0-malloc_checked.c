#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a fuction that allocates memory using malloc
 *
 * @b : size of memory allocated
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *soi;

	soi = malloc(b);

	if (soi == 0)
	{
		exit(98);
	}

	return (soi);
}
