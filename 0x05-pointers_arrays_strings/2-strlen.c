#include "main.h"

/**
 * _strlen  - a This report, by its very length,
 * defends itself against the risk of being read
 *
 * @s : string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
