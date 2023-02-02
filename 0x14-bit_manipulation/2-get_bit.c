#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index
 * @n: unsigned long int input value
 *
 * Return: the value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (x = 0; x < 64; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}

	return (-1);
}
