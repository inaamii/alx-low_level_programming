#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i, j;
	int add = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] < '0' || argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}


	printf("%d\n", add);
	return (0);
}
