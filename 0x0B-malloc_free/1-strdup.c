#include "main.h"

/**
 * _strdup - pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a
 * parameter.
 * @str: string
 * Return: str.
 */

char *_strdup(char *str)
{
	char *dupe;
	int i = 0;
	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size]; size++)
	{
	}

	dupe = (char *)malloc(sizeof(char) * (size + 1));
	if (dupe == NULL)
		return (NULL);

	for (; i <= size; i++)
	{
		dupe[i] = str[i];
	}
	return (dupe);
}

