#include "main.h"

/**
*_abs - prints absolute value of int
*@x: any integer
*Return: x
*/

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
	}
	return (x);
}

