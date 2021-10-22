#include "main.h"

/**
* findingprime - validates n for prime
* @n: an integer
* @i: counter
*Return: itself
*/

int findingprime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (findingprime(n, i + 1));
}

/**
* is_prime_number - finds prime
* @n: an integer
*Return: 1 if prime 0 if not
*/

int is_prime_number(int n)
{
	if ((n < 0) || (n <= 2))
		return (0);
	return (findingprime(n, 2));
}

