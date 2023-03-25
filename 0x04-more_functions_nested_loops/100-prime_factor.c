#include <stdio.h>

/**
 * main - prime_factor
 *
 * Description  - a function that finds and print the largest prime factor.
 *
 * Return:  Always 0 (success)
 *
 */

int main(void)
{
	long int n = 612852475143;
	long int qt = n;
	long int div = 2;

	while (qt != div)
	{
		if (qt % div == 0)
			qt /=  div;
		else
			div++;
	}

	printf("%li\n", qt);
	return (0);
}
