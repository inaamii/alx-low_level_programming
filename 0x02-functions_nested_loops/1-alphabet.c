#include "main.h"

/**
 * print_alphabet - a function that print alphabet
 */

void print_alphabet(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
