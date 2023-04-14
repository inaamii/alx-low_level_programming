#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  a function that reallocates a memory
 * block using malloc and free
 *
 * @ptr : pointer
 * @old_size : old size memory of array
 * @new_size : new size memory of array
 *
 * Return: a pointer to the memory previously allocated.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	return (ptr);
	}

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
	return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
