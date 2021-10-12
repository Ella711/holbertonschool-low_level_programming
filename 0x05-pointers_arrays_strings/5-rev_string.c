#include "main.h"

/**
* _strlen - returns length of string
*@s: a string
*Return: i
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

/**
* rev_string - reverses a string
*@s: a string
*/

void rev_string(char *s)
{
	int len, i;
	char *begin, *end, oriV;

	len = _strlen(s);
	begin  = s;
	end    = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		oriV   = *end;
		*end   = *begin;
		*begin = oriV;

		begin++;
		end--;
	}
}

