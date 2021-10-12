#include "main.h"
#include <stdio.h>

/**
* _strcpy - prints n elements of array
*@dest: string
*@src: string
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

