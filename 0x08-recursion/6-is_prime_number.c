#include "main.h"

/**
 * is_prime_num - determines whether the given number is prime or not
 * @n: given number
 * @m: iterator
 *
 * Return: 0.
 */
int is_prime_num(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	return (is_prime_num(n, m + 1));
}

/**
 * is_prime_number - determines whether the given number is prime or not
 * @n: given number
 *
 * Return: 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_num(n, 2));
}
