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
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string 2
 * Return: malloc string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, ss1, ss2, size;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ss1 = _strlen(s1);
	ss2 = _strlen(s2);
	size = ss1 + ss2;

	concat = (char *)malloc(sizeof(char) * (size + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ss1; i++)
		concat[i] = s1[i];
	for (j = 0; j < size; j++, ss1++)
		concat[ss1] = s2[j];
	return (concat);
}

