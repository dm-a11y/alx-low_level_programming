#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed
 * @n: number of strings
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
