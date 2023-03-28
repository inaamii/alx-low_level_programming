#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * @str : string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int half;

	while (str[i] != '\0')
	{
		i++;
	}

	half = i / 2;
	while (half <= i)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
