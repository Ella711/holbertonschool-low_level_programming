#include "main.h"

/**
* _isalpha - checks for letters
* *@c: The character to print
* Return: 1 if letter either upper or lowercase
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

