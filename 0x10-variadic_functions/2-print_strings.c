#include "variadic_functions.h"

/**
 * print_strings - a function that prints numbers, followed by a new line.
 *
 * @separator :  the string to be printed between the string.
 * @n : the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (string != NULL)
		{
			string = va_arg(args, char *);
			printf("%s", string);

		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
