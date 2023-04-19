#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array : input array
 * @size : size of the array
 * @action : a pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!(array == NULL || action == NULL))
	{
		while (i < size)
		{
			action(array[i]);
		i++;
		}
	}
}
