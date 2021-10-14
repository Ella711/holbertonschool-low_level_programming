#include "main.h"

/**
* leet - make it into leet speak
*@str: any string
*Return: str
*/

char *leet(char *str)
{
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
	int i = 0;
	int j = 0;

	for (; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
		}
	}
	return (str);
}

