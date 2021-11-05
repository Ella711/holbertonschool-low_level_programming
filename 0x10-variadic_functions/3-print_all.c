#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - prints everything
*@format: format of parameters
*/

void print_all(const char * const format, ...)
{
	va_list args;
	char *sval, *separator = ", ";
	const char *str = format;

	va_start(args, format);

	while (*str)
	{
		switch (*str++)
		{
			case 'c':
				putchar(va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				sval = va_arg(args, char *);
				if (sval == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", sval);
				break;
			default:
				continue;
		}
		if (*(str))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

