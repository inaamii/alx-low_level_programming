#include "main.h"

/**
 * _prime_number - a function that check a Prime number
 *
 * @n : number of input
 * @p : iterator
 *
 * Return: returns 1 if the input integer is a prime number
 * otherwise return 0
 */

int _prime_number(int n, int p)
{
	if (p == 1)
	{
		return (1);
	}
	if (p > 0 && n % p == 0)
	{
		return (0);
	}
	return (_prime_number(n, p - 1));
}

/**
 * is_prime_number - a function that check a Prime number
 *
 * @n : number of input
 *
 * Return: returns 1 if the input integer is a prime number
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_number(n, n - 1));
}

