#include <stdio.h>
/**
 * main - combinations of tow dijits
 *
 * Description: a program that prints all possible
 * different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N1 = 48;
	int N2;

	while (N1 < 57)
	{
		N2 = N1 + 1;
		while (N2 < 58)
		{
			putchar(N1);
			putchar(N2);
			if (N1 < 56 || N2 < 57)
			{
				putchar(',');
				putchar(' ');
			}
		N2++;
		}
	N1++;
	}
	putchar('\n');
	return (0);
}
