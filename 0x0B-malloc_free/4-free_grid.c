#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
