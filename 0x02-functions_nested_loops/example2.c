#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>

int main(void)
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
				
				putchar(result + '0');
				
				
			}
			else if (result <= 9)
			{
				
				putchar(44);
				putchar(32);
				putchar(32);
				putchar(result + '0');
			}
			else if (result > 9)
			{
				putchar(44);
				putchar(32);
				a = result/10;
				b = result%10;
				putchar(a + '0');
				putchar(b + '0');
			}
		}
		putchar(10);
	}

	return (0);
}