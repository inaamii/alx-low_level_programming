#include "main.h"
#include <stdio.h>

/**
 * main - a program that print the number of arguments
 *
 * @argv : arguments numbers
 * @argc : array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
