#include"main.h"

/**
 * binary_to_uint - coverts binary number to unsigned int
 * @b: pointer to the string
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int len, base;

	if (!b)
		return (0);

	x = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			x += base;
		}
	}

	return (x);
}
