#include "main.h"
#include <stdio.h>

/**
 * main - a function that print its name
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
