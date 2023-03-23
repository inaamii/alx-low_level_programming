#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 *
 * @c : for check the input of function
 *
 * Return: return 1 if 'c' uppercase and 0 is not
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
