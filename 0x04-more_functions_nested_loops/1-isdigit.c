#include "main.h"

/**
*_isdigit - checks for a digit (0 through 9)
*@c: The int to print
*Return: 1 if digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}

