#include "variadic_functions.h"

/**
 * sum_them_all - prints the sum of all parameters
 * @n: number of arguments
 *
 * Return: integer value.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (x = 0; x < n; x++)
			sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
