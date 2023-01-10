#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array which is created by alloc_grid
 * @grid: the address of the 2d array
 * @height: height of the 2d array
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
