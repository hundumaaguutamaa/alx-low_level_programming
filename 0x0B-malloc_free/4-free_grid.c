#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated for the grid
 * alloc_grid(): creates two dimensional grid
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int g;

	if (grid == NULL || height == 0)
		return;

	for (g = 0; g < height; g++)
		free(grid[g]);

	free(grid);
}

