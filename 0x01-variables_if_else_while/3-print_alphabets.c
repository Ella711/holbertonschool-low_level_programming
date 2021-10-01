#include <stdio.h>
/**
 * main - Prints alphabet in caps and non caps
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}

