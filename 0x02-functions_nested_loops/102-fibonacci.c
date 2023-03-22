#include <stdio.h>

/**
 * main -  a program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int f1 = 0;
	int f2 = 1;
	int add;

	for (i = 0; i <= 50; i++)
	{
		add = f1 + f2;
		printf("%d", add);
		f1 = f2;
		f2 = add;
			if (i == 49)
				printf("\n");
			else
				printf(" ,");
	}
	return (0);
}
