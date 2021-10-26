#include "main.h"

/**
*alloc_grid - returns length of string
*@width: columns of 2d array
*@height: rows of 2d array
*Return: p
*/

int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width == 0 && height == 0)
		return (NULL);

	p = (int **)malloc(width * sizeof(int)); /* columns */
	for (i = 0; i < width; i++)
	{
		p[i] = (int *)malloc(height * sizeof(int *)); /* rows */
	}
	if (p == NULL)
		return (NULL);
	return (p);
}

