#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of array
*@n: integer
*@a: array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

