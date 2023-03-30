#include "main.h"

/**
 * string_toupper - a function that changes all lowercase to uppercase
 *
 * @upper : pointer
 *
 * Return: return upper
 */

char *string_toupper(char *upper)
{
	int i = 0;

	while (upper[i] != '\0')
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
		{
		upper[i] = upper[i] - 32;
		}
		i++;
	}
	return (upper);

}

