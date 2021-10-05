#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>

int main(void)
{

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
			putchar(32);
			putchar(',');
			a = result/10;
			b = result%10;
			putchar(a + '0');
			putchar(b + '0');
			
		}
		if (result < 10 && result/10 == 0)
		{
			putchar(result + '0');
			putchar(',');
			putchar(32);
			putchar(32);
		}
		
	}

	putchar('\n');
}

}