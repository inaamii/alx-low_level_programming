#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of set of bytes
 *
 * @s : string
 * @accept : string
 *
 * Return: return a pointer to the byte in s
 * that matches one of the bytes in accept, or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s = s + 1;

	i++;
	}
	return (NULL);
}
