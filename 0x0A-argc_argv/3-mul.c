#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argv : arguments numbers
 * @argc : array of arguments
 *
 * Return: if the program does not receive tow argument
 * return Error, else 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("ERROR\n");
	}
	else
	{
	mul = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mul);
	}
	return (0);
}
