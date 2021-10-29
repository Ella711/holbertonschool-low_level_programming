#include "main.h"

/**
* array_range - creates array of integers
*@min: integer
*@max: integer
*Return: pointer with range of array
*/

int *array_range(int min, int max)
{
	int *range;
	int length, i = 0;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	range = malloc(sizeof(int) * length);
	if (range == NULL)
		return (NULL);

	for (; min <= max; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}

