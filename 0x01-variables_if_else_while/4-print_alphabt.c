#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: print the alphabet exept q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 'a';
		while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	n++;
	}
	putchar('\n');
	return (0);
}
