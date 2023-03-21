#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 */



void print_alphabet_x10(void)
{
	int ctr;
	char str;
		for (ctr = 0; ctr < 10; ctr++)
	{
		for (str = 'a'; str <= 'z'; str++)
		{
			_putchar(str);
		}
		_putchar('\n');
	}
}
