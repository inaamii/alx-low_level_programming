#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates tow strings
 *
 * @s1 : first string
 * @s2 : second string
 * @n : size
 *
 * Return: pointer to the allocated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int l1, l2, j;
	char *s;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;

	if (n >= l2)
		n = l2;

	s = malloc(l1 + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (j < n)
			{
				s[i] = s2[j];
				i++;
			}
		}
		s[i] = '\0';
	return (s);

}
