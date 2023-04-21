#include "variadic_functions.h"


/**
 * print_c - print character
 *
 * @args : arguments
 *
 * Return: void
 */

void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - print intiger
 *
 * @args :  arguments
 *
 * Return: void
 */

void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - print float
 *
 * @args : arguments
 *
 * Return : void
 */

void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string
 *
 * @arg : arguments
 *
 * Return : void
*/

void print_string(va_list arg)
{
	char *string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
	}

	printf("%s", string);
}

/**
 * print_all - a function that prints anything.
 *
 * @format : a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *string = "";
	char *separator = ", ";

	dt_func df[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_string}
	};
	va_list arg;

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		for (j = 0; df[j].dt != '\0'; j++)
		{
			if (df[j].dt == format[i])
			{
				printf("%s", string);
				df[j].f(arg);
				string = separator;
			}
		}
	i++;
	}
	printf("\n");
	va_end(arg);

}
