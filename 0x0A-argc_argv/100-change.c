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

	int i, j;
	int rest = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	j = 0;
	while (j < 5 && i >= 0)
	{
		while (i >= c[j])
		{
			rest++;
			i = i - c[j];
		}
	j++;
	}

	printf("%d\n", rest);
	return (0);
}
