#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates tow strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: new pointer, NULL if is passed, treat it as an empty string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int l1;
	int l2;
	char *str;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	for (l1 = 0; s1[l1] != '\0'; l1++)
	;

	for (l2 = 0; s2[l2] != '\0'; l2++)
	;

	str = (char *) malloc((l1 + l2) * sizeof(char) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < l2; i++)
	{
		str[i + l1] = s2[i];
	}

	return (str);
}
