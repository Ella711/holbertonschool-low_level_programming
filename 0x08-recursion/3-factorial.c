#include "main.h"

/**
* factorial - returns factorial of n
*@n: an integer
*Return: n
*/

int factorial(int n)
{
	if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n);
}

