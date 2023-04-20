#include "3-calc.h"

/**
 * op_add - a function that returns the sum of a and b
 *
 * @a: first input integer
 * @b: second inout integer
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the difference of a and b
 *
 * @a: first input integer
 * @b: second inout integer
 *
 * Return: the sub of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the product of a and b
 *
 * @a: first input integer
 * @b: second inout integer
 *
 * Return: the mul of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the result of
 * the division of a and b
 *
 * @a: first input integer
 * @b: second inout integer
 *
 * Return: the div of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(1);
	}
	return (a / b);
}

/**
 * op_mod - a function that returns the remainder of
 * the division of a and b
 *
 * @a: first input integer
 * @b: second inout integer
 *
 * Return: the mod of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(1);
	}
	return (a % b);
}
