#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');;
}
