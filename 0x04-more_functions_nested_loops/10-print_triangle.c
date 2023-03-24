#include "main.h"

/**
 * print_triangle - a function that prints a triangle.
 *
 * @size : check the size of input
 *
 * Return:  Always 0 (success)
 *
 */

void print_triangle(int size)
{
	int l, spc, htg;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (spc = size - 1; spc > l; spc--)
			{
				_putchar(' ');
			}
			for (htg = 0; htg < l + 1; htg++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
