#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 *
 * Description: Frees a 2 dimensional grid grid of the height height
 * @grid: The grid to free
 * @height: The height
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = height; i >= 0; i--)
		free(grid[i]);

	free(grid);
}
