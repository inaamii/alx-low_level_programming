#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a : pointer
 * @b : pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
