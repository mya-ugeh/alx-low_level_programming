#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocate a 2D array of integers.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to the allocated 2D array of integers,
 *         or NULL on failure or if width/height are 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
