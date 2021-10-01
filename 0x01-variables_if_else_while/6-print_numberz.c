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

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar (10);
	return (0);
}
