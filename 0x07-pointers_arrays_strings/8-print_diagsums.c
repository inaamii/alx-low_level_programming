#include "main.h"

/**
 * print_diagsums - a function that print sum of the to diagonals
 *
 * @a : array of 2D
 * @size : size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int SUM1 = 0;
	int SUM2 = 0;

	for (i = 0; i < size; i++)
	{
		SUM1 = SUM1 + a[(size * i) + i];
		SUM2 = SUM2 + a[(size * (i + 1) - (i + 1))];
	}

		printf("%d, %d\n", SUM1, SUM2);
}
