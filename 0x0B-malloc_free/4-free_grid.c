#include "main.h"

/**
 * free_grid - frees memory
 * @grid: points to the array
 * @height: number of rows in the array
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
