#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		matrix[x] = malloc(width * sizeof(int));
		if (matrix[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(matrix[x]);
			free(matrix);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			matrix[x][y] = 0;

	return (matrix);
}

