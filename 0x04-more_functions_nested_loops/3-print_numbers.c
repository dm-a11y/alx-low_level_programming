#include "main.h"

/**
 * print_numbers - print digits 0 up to 9 followed by a new line
 *
 * Return: return void
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
