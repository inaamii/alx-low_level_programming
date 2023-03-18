#include <stdio.h>
/**
 * main - print digit numbers
 *
 * Description: prints all single digit numbers of base 10
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
		while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
