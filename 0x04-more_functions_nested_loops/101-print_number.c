#include "main.h"
/**
 * print_number - prints numbers
 *
 * @n: input number
 */

void print_number(int n)
{
	unsigned int nbr;

	nbr = n;
	if (n < 0)
	{
		_putchar(45);
		nbr = -n;
	}
	if (nbr / 10)
	{
		print_number(nbr / 10);
	}
	_putchar((nbr % 10) + 48);
}
