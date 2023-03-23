#include "main.h"
/**
 * main - putchar
 *
 * Description: prints char
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char string[8] = "_putchar";
	int i = 0;
		while (i < 8)
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
