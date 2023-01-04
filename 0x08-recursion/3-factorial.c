#include "main.h"

/**
 * factorial - return the factorial of any given number
 * @n: any given number
 *
 * Return: 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else 
		return (n * factorial(n - 1));
}
