#include "main.h"

/**
* rot13 - encode a string in rot13
*@str: any string
*Return: str
*/

char *rot13(char *str)
{
	int i, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstu				vwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefgh				ijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alph[j]; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}
	return (str);
}
