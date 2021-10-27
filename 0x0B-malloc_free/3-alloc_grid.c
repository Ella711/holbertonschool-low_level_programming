#include "main.h"

/**
*alloc_grid - returns length of string
*@width: columns of 2d array
*@height: rows of 2d array
*Return: p
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *)); /* rows */
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int)); /* columns */
		if (grid[i] == NULL) /* validate malloc again */
		{
			for (i = 0; i < height; i++) /* if malloc fails, free all spots */
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}

