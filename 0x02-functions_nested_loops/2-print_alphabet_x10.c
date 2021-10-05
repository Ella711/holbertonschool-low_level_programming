#include "main.h"

/**
* print_alphabetx10 - prints the alphabet 10 times
*/

void print_alphabetx10(void)
{
	int a = 0;

	while (a < 10)
	{
		int i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		a++;
	}

}
