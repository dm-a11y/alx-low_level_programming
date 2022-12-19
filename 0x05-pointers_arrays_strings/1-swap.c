#include "main.h"

/**
 * swap_int - swaps the integer value of two vaiables
 *
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
