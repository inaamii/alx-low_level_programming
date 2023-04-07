#include "main.h"

/**
 * _len - a function taht returns length of string
 *
 * @s: string
 *
 * Return: return length of string
 */

int _len(char *s)
{

	if (*s != '\0')
	{
		return (1 + _len(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * _check - a funtion that check the string is match
 *
 * @s : string
 * @deb : index initial
 * @fin : fin index
 *
 * Return: 1 is match, 0 is non-match
 */

int _check(char *s, int deb, int fin)
{
	if (s[deb] != s[fin])
	{
		return (0);
	}
	else if ((deb == fin) && (s[deb] == s[fin]))
	{
		return (1);
	}
	else if ((deb == fin - 1) && (s[deb] == s[fin]))
	{
		return (1);
	}
	else
	{
		return (_check(s, deb + 1, fin - 1));
	}
}



/**
 * is_palindrome - check a string is a palindrome
 *
 * @s : string
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _len(s);
	int deb = 0;
	int fin = length - 1;


	if (length == 0 || length == 1)
	{
		return (1);
	}
	else
	{
		return (_check(s, deb, fin));
	}
}
