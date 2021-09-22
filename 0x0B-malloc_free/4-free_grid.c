#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: 2D grid
 * @height: integer
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid != 0 || height != 0)
	{
		for (n = 0; n < height; n++)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
