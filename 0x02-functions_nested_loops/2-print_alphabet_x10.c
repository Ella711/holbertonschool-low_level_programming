#include "main.h"

/**
* void print_alphabet_x10(void) - prints the alphabet 10 times
*/

void print_alphabet_x10(void)
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
