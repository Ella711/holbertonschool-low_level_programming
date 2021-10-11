#include "main.h"

/**
* swap_int - swaps integers
*@a: any integer
*@b: an integer
*/

void swap_int(int *a, int *b)
{
	int oriA;

	oriA = *a;

	*a = *b;
	*b = oriA;
}

