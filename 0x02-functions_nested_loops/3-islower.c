#include "main.h"

/**
* int _islower - checks for lowercase character
* Return: 1 if lowercase
*/

int _islower(int c)
{
	if ( c <= 90 && c >= 65)
	{
		return (0);
	} else {
		return (1);
	}
}
