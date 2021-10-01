#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints numbers 0-9 with commas
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar (10);
	return (0);
}
