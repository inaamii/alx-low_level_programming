#include <stdio.h>

/**
 * main - The Fizz-Buzz test
 *
 * Description  - a program that print number 1 to 100
 * for multiples of three print Fizz
 * ............................ buzz
 * ............. of both three and five print FizzBuzz
 *
 * Return:  Always 0 (success)
 *
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
