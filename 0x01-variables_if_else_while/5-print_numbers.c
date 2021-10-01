#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints numbers 0-9
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar (10);
	return (0);
}