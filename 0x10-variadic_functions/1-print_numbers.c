#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: is a string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
