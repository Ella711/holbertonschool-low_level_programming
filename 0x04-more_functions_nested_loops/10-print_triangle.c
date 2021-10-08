#include "main.h"

/**
* print_triangle - draws a triangle
*@size: any integer
*/

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= size - (i - 1))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}

