#include "main.h"

/**
* cap_string - changes first letters of
* a string to uppercase
*@str: any string
*Return: str
*/

char *cap_string(char *str)
{
	int i = 0;

	if (i == 0)
	{
	/* checks if first character is lowercase */
	if ((str[i] >= 'a' && str[i] <= 'z'))
		str[i] = str[i] - 32;
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == ','
		|| str[i] == '\t' || str[i] == '\n'
		|| str[i] == ';' || str[i] == '.'
		|| str[i] == '!' || str[i] == '?'
		|| str[i] == '"' || str[i] == '('
		|| str[i] == ')' || str[i] == '{'
		|| str[i] == '}')
		{

			/* check if next character is lowercase */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
				continue;
			}
		}

	}
	return (str);
}

