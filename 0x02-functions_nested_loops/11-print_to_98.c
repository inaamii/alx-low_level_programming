#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that print all natural number
 * from n to 89
 *
 * @n: the integer of strat
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
