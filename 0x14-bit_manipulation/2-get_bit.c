#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary of a number
 * @n: decimal number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (-1);
}