#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse 
 * @s: string
 *
 * Return: Nothing.
 */
void _print_rec_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
