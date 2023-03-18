#include <stdio.h>

/**
 * main - print digit numbers
 *
 * Description: Write a program that prints all single digit numbers
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
		while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}

