#include "main.h"

/**
* reverse_array - reverses content of an array of integers
*@a: array of integers
*@n: integer
*/

void reverse_array(int *a, int n)
{
	int oriV;
	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		oriV   = *(a + begin);
		*(a + begin)   = *(a + end);
		*(a + end) = oriV;

		begin++;
		end--;
	}
}

