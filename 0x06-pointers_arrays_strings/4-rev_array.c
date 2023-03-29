#include "main.h"

/**
 * reverse_array - a function thet reverses the content of an
 * array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int swp;

	n = n - 1;
	while (i < n)
	{
		swp = a[i];
		a[i] = a[n];
		a[n] = swp;
	i++;
	n--;
	}
}
