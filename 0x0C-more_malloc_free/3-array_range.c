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
	int i = 0;
	int *tab;

	if (min > max)
	{
		return (NULL);
	}

	tab = malloc((max - min + 1) * sizeof(int));

	if (tab == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		tab[i] = min;
		min++;
	}

	return (tab);
}
