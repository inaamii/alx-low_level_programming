#include "main.h"

/**
 * _isdigit - a function that checks for digital character
 *
 * @c : for check the input of function
 *
 * Return: return 1 if 'c' digit and 0 is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
