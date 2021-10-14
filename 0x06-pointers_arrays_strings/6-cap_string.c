#include "main.h"

/**
* cap_string - changes first letters of
* a string to uppercase
*@str: any string
*Return: str
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		/* check first character is lowercase alphabet */
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == '\n' || str[i] == ' '
		|| str[i] == '\t' || str[i] == '.'
		|| str[i] == ':' || str[i] == ';'
		|| str[i] == '!' || str[i] == '?'
		|| str[i] == '"' || str[i] == '('
		|| str[i] == ')' || str[i] == '{'
		|| str[i] == '}')
		{
			/* if found, check next character */
			++i;
			/* check if next character is lowercase */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}

	}
	return (str);
}

