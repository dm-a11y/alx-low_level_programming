#include "main.h"

/**
 * set_bit - stes the value of a bit to 1 at a given index
 * @n: pointer to an input unsigned long int
 * @index: the index
 *
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index >= 64)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
