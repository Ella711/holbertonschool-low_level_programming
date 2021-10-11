#include "main.h"

/**
*print_rev - prints a string in reverse
*@s: a string
*Return: i
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

