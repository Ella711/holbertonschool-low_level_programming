#include "main.h"

/**
* void times_table(void) - prints 9 times table
*/

void times_table(void)

int multiplier1;
int multiplier2;
int result = 0;
int a;
int b;

for (multiplier1 = 0; multiplier1 <= 9; multiplier1++)
{
	for(multiplier2 = 0; multiplier2 <= 9; multiplier2++)
	{
		result = multiplier1 * multiplier2;
		if (result >= 10)
		{
			a = result/10;
			b = result%10;
			_putchar(a + '0');
			_putchar(b + '0');
		}
	}
}