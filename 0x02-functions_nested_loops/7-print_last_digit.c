#include "main.h"

/**
*print_last_digit - prints lastdigit
*@x: any integer
*Return: 0
*/

int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}

