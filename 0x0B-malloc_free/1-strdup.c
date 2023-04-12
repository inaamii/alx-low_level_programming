#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that eturns a pointer to a new
 * string which is a duplicate of the string str.
 *
 * @str : string
 *
 * Return: pointer to a newly, Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	unsigned int i, cnt;
	char *s;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	cnt = 0;
	while (cnt <= i)
	{
		s[cnt] = str[cnt];
		cnt++;
	}

	return (s);
}
