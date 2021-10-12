#include "main.h"

/**
* puts_half - returns half of the string
*@str: a string
*Return: i
*/

void puts_half(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;

	if (i % 2 == 0)
		i = i / 2;
	else
	{
		i = ((i - 1) / 2);
		i++;
	}

	while (*(str + i) != ('\0'))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

