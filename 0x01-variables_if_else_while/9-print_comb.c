#include <stdio.h>
/**
 * main - print digit numbers
 *
 * Description: Write a program that prints all
 * possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
		while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
