#include "main.h"

/**
 * _sqrt_recursion_1 - a function that recurses to check the natural sqrt
 *
 * @n : input number
 * @p : iterator
 *
 * Return: return a result of checker
 */

int _sqrt_recursion_1(int n, int p)
{
	if (p * p > n)
	{
		return (-1);
	}
	if (p * p == n)
	{
		return (p);
	}
	return (_sqrt_recursion_1(n, p + 1));
}

/**
 * _sqrt_recursion - a function that returne
 * the natural square root of a number
 *
 * @n : input number
 *
 * Return: the natural square root of a number.
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_1(n, 0));
}
