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
	long int f1 = 0;
	long int f2 = 1;
	long int add;

	for (i = 0; i <= 50; i++)
	{
		add = f1 + f2;
		printf("%li, ", add);
		f1 = f2;
		f2 = add;
	}
	add = f1 + f2;
	printf("%li\n", add);

	return (0);
}
