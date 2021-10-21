#include "main.h"

/**
* _puts_recursion - prints a string
*@s: string
*/

void _puts_recursion(char *s)
{

	int i = 0;

	if (*s != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
		_putchar(10);
}
