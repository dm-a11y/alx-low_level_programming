#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: array 1.
 * @max: array 2.
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int x;
	int *newarr;

	if (min > max)
		return (NULL);

	newarr = malloc(sizeof(int) * ((max - min) + 1));

	if (newarr == NULL)
		return (NULL);
	for (x = 0; min <= max; x++, min++)
		newarr[x] = min;
	return (newarr);
}
