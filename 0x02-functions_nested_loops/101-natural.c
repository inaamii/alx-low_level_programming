#include <stdio.h>

/**
 * main - a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int add = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			add = add + n;
		}
	n++;
	}
	printf("%d\n", add);
	return (0);
}
