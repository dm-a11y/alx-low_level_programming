#include "main.h"

/**
 * flip_bits - returns the number of bits i would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits i would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x; /*where x is the number of bits*/

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			x++;
	}

	return (x);
}
