#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *
 */
void more_numbers(void)
{
	int l, i, n;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				n = i % 10;
			}
			_putchar(n + '0');
		}
	_putchar('\n');
	}
}
