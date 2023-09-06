#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free memory allocated for a 2D grid.
 * @grid: The pointer to the 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
