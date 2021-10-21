#include "main.h"

/**
* _secondsqr - validates n for sqr root
* @n: an integer
* @i: counter
*Return: itself
*/

int _secondsqr(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_secondsqr(n, i + 1));
}

/**
* _sqrt_recursion - returns square root of n
* @n: an integer
*Return: square root
*/

int _sqrt_recursion(int n)
{
	return (_secondsqr(n, 1));
}

