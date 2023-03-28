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
	int i;

	for (i = 0; str[i] != '\0'; i++)

	i = i + 1;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
