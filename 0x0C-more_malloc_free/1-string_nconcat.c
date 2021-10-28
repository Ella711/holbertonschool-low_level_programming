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
 * string_nconcat - concatenates two strings limited by n
 * @s1: string
 * @s2: string 2
 * @n: integer of bytes to be copied
 * Return: malloc string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ss1, ss2, size;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ss1 = _strlen(s1);
	ss2 = _strlen(s2);

	if (n >= ss2)
		size = ss1 + ss2;
	else
		size = ss1 + n;

	concat = malloc(sizeof(char) * (size + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (j = 0; j < size; j++)
	{
		concat[i + j] = s2[j];
		if (j == n)
			break;
	}
	return (concat);
}

