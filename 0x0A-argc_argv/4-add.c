#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argv : arguments numbers
 * @argc : array of arguments
 *
 * Return: If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits, print Error
 * and return 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	i++;
	}


	printf("%d\n", add);
	return (0);
}
