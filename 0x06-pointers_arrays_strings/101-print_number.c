#include "main.h"

/**
 * print_number - a function that prints integer
 *
 * @n: integer
 */

void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(n * (-1));
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}

}
