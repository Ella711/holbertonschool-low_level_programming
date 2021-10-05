#include "main.h"

/**
*times_table - prints 9 times table
*/

void times_table(void)
{
	int row;
	int column;
	int a;
	int b;
	int result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;

			if (column == 0)
			{
				_putchar(result + '0');
			}
			else if (result <= 9)
			{

				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(result + '0');
			}
			else if (result > 9)
			{
				_putchar(44);
				_putchar(32);
				a = result / 10;
				b = result % 10;
				_putchar(a + '0');
				_putchar(b + '0');
			}
		}
		_putchar(10);
	}

}
