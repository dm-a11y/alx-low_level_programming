#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: argument of the function
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l += 1;
		str += 1;
	}

	str -= (l % 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}

	_putchar('\n');
}
