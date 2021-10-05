#include "main.h"

/**
* int print_sign(int n) - prints sign of number
* Return: 1 if greater than 0
*/

int print_sign(int n)
{
	if ( n > 0 )
	{
		_putchar('+');
		return (1);
	} else if ( n == 0 )
	{
		_putchar('0');
		return (0);
	} else {
		_putchar('-');
		return (-1);
	}
}
