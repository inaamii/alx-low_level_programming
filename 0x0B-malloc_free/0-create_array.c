#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size : size of array
 * @c : char to initialize
 *
 * Return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);

}
