#include "main.h"

/**
* int print_last_digit(int x) - prints lastdigit
*/

int print_last_digit(int x)
{
	x = x % 10;
	if ( x < 0)
	{
		x = x *-1;
	}
	_putchar(x + '0');
	return (x);
}
