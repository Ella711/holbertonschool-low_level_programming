#include "main.h"

/**
* _strcat - concatenates two strings
*@dest: string
*@src: string
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i]; i++) /* does not need the != '0'*/
	{
	}
	for (; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}

