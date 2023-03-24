#include <stdio.h>

/**
 * fizz_buzz - a program that print number 1 to 100
 * for multiples of three print Fizz
 * ............................ buzz
 * ............. of both three and five print FizzBuzz
 *
 * Return : 0 Always (seccess)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
