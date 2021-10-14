#include "main.h"

/**
* _strlen - returns length of string
*@s: a string
*Return: i
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}

/**
* _strncat - concatenates two strings using at most n bytes
*@dest: string
*@src: string
*@n: any integer
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = _strlen(dest);

	for (; (i < n && src[i] != '\0'); i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

