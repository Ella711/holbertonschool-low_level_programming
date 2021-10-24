#include "main.h"

/**
* palindrome - validates for palindrome
* @str: string
* @i: counter from beginning
* @j: counter from end of string
*Return: 1 if palindrome, 0 if not, itself to keep checking
*/

int palindrome(char *str, int i, int j)
{
	if (i > j)
		return (1);
	if (str[i] != str[j])
		return (0);
	return (palindrome(str, i + 1, j + 1));
}

/**
* is_palindrome - validates str for palindrome
* @s: string
*Return: function for finding palindrome
*/

int is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen((s) - 1)));
}

