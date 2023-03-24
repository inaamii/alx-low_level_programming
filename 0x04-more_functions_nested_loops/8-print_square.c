#include "main.h"

/**
 * print_square - a function thet print a square
 *
 * @size : check for the input of size of squar
 */

void print_square(int size)
{
	int l =0;
	int c;
	
	if (size > 0)
	{
		while (l < size && size > 0)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
