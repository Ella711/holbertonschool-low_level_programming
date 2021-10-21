#include "main.h"

/**
* _strlen_recursion - returns length of string
*@s: a string
*Return: n
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	return (n);
}

