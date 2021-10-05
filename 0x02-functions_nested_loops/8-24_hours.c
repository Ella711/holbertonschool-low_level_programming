#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int minutosI;
	int minutosD;
	int horasI;
	int horasD;

	for (horasI = 0; horasI <= 2; horasI++)
	{
		for (horasD = 0; horasD <= 9; horasD++)
		{
			for (minutosI = 0; minutosI < 6; minutosI++)
			{
				for (minutosD = 0; minutosD <= 9; minutosD++)
				{
					if (((horasD <= 3) && (horasI == 2)) || (horasI < 2))
					{
						_putchar(horasI + '0');
						_putchar(horasD + '0');
						_putchar(':');
						_putchar(minutosI + '0');
						_putchar(minutosD + '0');
						_putchar(10);
					}
				}
			}
		}
	}
}

