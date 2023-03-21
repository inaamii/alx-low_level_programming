#include "main.h"

/*
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int ctr = 0;
	char str = 'a';

	while (ctr < 10)
	{
		str = 'a';
		while (str <= 'z')
		{
			_putchar(str);
			str++;
		}
		_putchar('\n');

		ctr++;
	}
}
