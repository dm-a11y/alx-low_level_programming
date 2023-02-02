#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n:pinter to the input unsigned long int
 * @index: the index
 *
 * Return: 1 if success, -1 if fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index >= 64)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
