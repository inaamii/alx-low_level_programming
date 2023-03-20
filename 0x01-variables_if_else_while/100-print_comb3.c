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
	int i = 48;
	int j;

	while (i < 57)
	{
		j = 48;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		j++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}
