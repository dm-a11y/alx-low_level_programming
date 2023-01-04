#include "main.h"

/**
 * sqrt1 - returns the natural square root of a number
 * @n: number
 * @m: iterator
 *
 * Return: 0.
 */
int sqrt1(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (sqrt1(n, m + 1));
}

/**
 * _sqrt_recursion - returnsthe natural square root of a number
 * @n: number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
