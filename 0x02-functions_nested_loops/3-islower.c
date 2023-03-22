#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * @c : for check the input of function
 *
 * Return: return 1 if 'c' lowercase and 0 is not 
 */

int _islower(int c)
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
