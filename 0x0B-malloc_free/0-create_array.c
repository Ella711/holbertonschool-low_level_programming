#include "main.h"

/**
 * create_array - creates an array of chars,
 * initialized with a specific char
 * @c: char to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}

