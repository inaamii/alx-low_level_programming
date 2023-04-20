#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculator
 *
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int (*cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(100);
	}

	cal = get_op_func(argv[2]);

	if (cal == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", cal(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
