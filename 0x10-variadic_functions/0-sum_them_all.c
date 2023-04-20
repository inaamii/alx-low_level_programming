#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n : arguments number
 * @... : special macros to access the variable arguments.
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	if (n != 0)
	{
		va_start(arg, n);
			while (i < n)
			{
				sum = sum + va_arg(arg, int);
			i++;
			}
		va_end(arg);
	}
	return (sum);
}
