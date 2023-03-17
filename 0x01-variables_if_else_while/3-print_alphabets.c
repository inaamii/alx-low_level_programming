#include <stdio.h>
/**
 * main - main prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	char N = 'A';
		while (n <= 'z')
	{
		putchar(n);
		n++;
	}
		while (N < 'Y')
	{
		putchar(N);
		N++;
	}
	putchar('\n');
	return (0);
}
