#include "main.h"

/**
* void print_to_98(int n) - prints from n till 98
*/

void print_to_98(int n)
{
	while (n < 99 && n != 98)
	{
		printf("%d, ", n);
		n++;
		
	} 
	while (n > 97 && n != 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98 )
	{
		printf("%d\n", n);
	}
	
}
