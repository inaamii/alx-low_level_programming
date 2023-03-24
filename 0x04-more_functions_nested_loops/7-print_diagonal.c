#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on a terminal
 *
 * @n : for check the input
 *
 */

void print_diagonal(int n)
{
	int i = 0;
	int spc;

	while (i <= n && n > 0)
	{
		for (spc = 0; spc < i; spc++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
