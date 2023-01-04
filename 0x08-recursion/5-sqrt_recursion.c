#include "main.h"

/**
 * sqrt - returns the natural square root of a number
 * @n: number
 * @m: iterator
 *
 * Return: 0.
 */
int sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (sqrt(n, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: number
 *
 * Return: 0.
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
