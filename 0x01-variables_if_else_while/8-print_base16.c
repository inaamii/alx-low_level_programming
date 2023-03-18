#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	int n = 48;
	char alph = 'a';
		while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
