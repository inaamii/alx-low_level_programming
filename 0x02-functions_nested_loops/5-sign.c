#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n : n is number
 *
 * Return: return 1 is greater than
 * zero -1 is less than zero and 0 is zero
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
