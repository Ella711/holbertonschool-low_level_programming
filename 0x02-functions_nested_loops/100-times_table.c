#include "main.h"

/**
*print_times_table - prints the n times table
*@n: any integer
*/

void print_times_table(int n)
{
	int row, column, result;

	if (n < 0 || n > 15)
	{
		_putchar(10);
	}
	else
	{
		for (row = 0; row <= n; row++)
		{
			_putchar(48);
			for (column = 1; column <= n; column++)
			{
				result = row * column;
				_putchar(44);
				_putchar(32);
				if (result <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(result + 48);
				}
				else if (result <= 99)
				{
					_putchar(32);
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
					}
					else
					{
				_putchar(((result / 100) % 10) + 48);
				_putchar(((result / 10) % 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
		_putchar(10);
	}
	}
}
