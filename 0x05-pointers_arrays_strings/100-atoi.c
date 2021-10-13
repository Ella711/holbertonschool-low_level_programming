#include "main.h"

/**
* _atoi - converts a string to an integer
*@s: a string
*Return: integers
*/

int _atoi(char *s)
{
	int i = 0;
	int counter = 0;
	int result = 0;

	for (; s[i] != '\0' && (s[i] < '0' || s[i] > '9'); i++)
	{
		if (s[i] == '-')
		{
			counter++;
		}
	}

	for (; s[i] >= 48 && s[i] <= 57; i++)
	{
		result = (result * 10 + (s[i] - 48));
	}

	if (counter % 2 == 1)
	{
		result *= -1;
	}
	return (result);
}

