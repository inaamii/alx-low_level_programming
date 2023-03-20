#include <stdio.h>
/**
 * main - combinations of three dijits
 *
 * Description: a program that prints all possible
 * different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N1 = 48;
	int N2;
	int N3;

	while (N1 <= 57)
	{
		N2 = N1 + 1;
		while (N2 <= 57)
		{
			N3 = N2 + 1;
			while (N3 <= 57)
			{
				putchar(N1);
				putchar(N2);
				putchar(N3);
				if (N1 < 56 || N2 < 57 || N3 < 55)
				{
					putchar(',');
					putchar(' ');
				}
			N3++;
			}
		N2++;
		}
	N1++;
	}
	putchar('\n');
	return (0);
}
