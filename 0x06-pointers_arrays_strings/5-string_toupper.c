#include "main.h"

/**
* string_toupper - changes all lowercase letters of
* a string to uppercase
*@str: any string
*Return: str
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32; /* subtract 32 to make it capital */
		i++;
	}
	return (str);
}

