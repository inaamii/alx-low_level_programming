#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argv : arguments numbers
 * @argc : array of arguments
 *
 * Return: if the number of arguments passed to your program is not exactly 1
 * If the number passed as the argument is negative, print 0
 */

int main(int argc, char *argv[])
{

	int i;
	int cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i = i - 2;
		else if (i % 25 == 0)
			i = i - 25;
		else if (i % 10 == 0)
			i = i - 10;
		else if (i % 5 == 0)
			i = i - 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i = i - 1;
			else
				i = i - 2;
		}
		else
			i = i - 1;

		cent++;
	}
	printf("%d\n", cent);
	return (0);
}
