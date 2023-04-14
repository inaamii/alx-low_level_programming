#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min : value minimum
 * @max : value maximum
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *tab;

	if (min > max)
	{
		return (NULL);
	}

	tab = malloc(((max + 1) - min) * sizeof(int));

	if (tab == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ((max + 1) - min); i++)
	{
		tab[i] = min + i;
	}

	return (tab);
}
