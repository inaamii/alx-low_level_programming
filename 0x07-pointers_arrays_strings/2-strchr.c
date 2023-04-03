#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s : string of input
 * @c : caracter
 *
 * Return: returns a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\n'; i++)
	{
		if (s[i] == c)
			return (s + i);
		else if (s[i] == 0)
			return (NULL);
	}
	return ('\0');

}
