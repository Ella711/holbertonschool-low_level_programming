#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints last digit task
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0", lastDigit);
	}
	return (0);
}
