#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c : for check the input of function
 *
 * Return: return 1 if 'c' alphabet and 0 is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
