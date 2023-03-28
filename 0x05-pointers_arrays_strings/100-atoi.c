#include "main.h"

/**
 * _atoi - a function that convert a string an integer
 *
 * @s : pointer
 *
 * Return : the int converted
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				n = ((s[i] - '0') * sign) + (n * 10);
				i++;
			}
	
		}
	i++;
	}

	return (n);
}
