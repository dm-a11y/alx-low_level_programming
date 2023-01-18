#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: the number of elements in the array
 * @cmp: a pointer to a function
 * @array: input array elements
 *
 * Return: the index of the first element if success, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (x = 0; x < size; x++)

			if (cmp(array[x]))
				return (x);
	}

	return (-1);
}
