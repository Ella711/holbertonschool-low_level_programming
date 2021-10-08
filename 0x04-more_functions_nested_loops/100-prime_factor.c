#include <stdio.h>

/**
 * main - print the max prime factor of a number
 * Return: 0
 */

int main(void)
{

	long int n = 612852475143;
	long int div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		div++;

		else
		{
			maxFact = n;
			n = n / div;

			if (n == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}

