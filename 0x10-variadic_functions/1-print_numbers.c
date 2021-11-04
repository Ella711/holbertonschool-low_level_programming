#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints all numbers
*@separator: string
*@n: number of parameters
*Return: sum of all parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1) || separator == NULL)
		{
			printf("%d\n", va_arg(nums, int));
		}
		else
			printf("%d%s", va_arg(nums, int), separator);
	}
	va_end(nums);
}

