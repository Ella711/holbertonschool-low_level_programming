#include "main.h"

/**
* _strlen - returns length of string
*@s: a string
*Return: i
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}

/**
* print_rev - prints string in reverse
*@s: a string
*/

void print_rev(char *s)
{
	int i, len = 0;

	len = _strlen(s);

	for (i = len - 1; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

