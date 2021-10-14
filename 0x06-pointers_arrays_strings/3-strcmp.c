#include "main.h"

/**
* _strcmp - compares two strings
*@s1: string
*@s2: string
*Return: comp
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int comp = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			comp = 0;
			i++;

		}
		else
		{
			comp = s1[i] - s2[i];
			break;
		}
	}
	return (comp);
}

