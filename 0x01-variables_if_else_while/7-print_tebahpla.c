#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Description: a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'z';
		while (n > 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
