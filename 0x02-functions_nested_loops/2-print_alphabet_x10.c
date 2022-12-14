#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets in lowercase followed by a new * line
 */
void print_alphabet_x10(void)
{
	int n;
	char c;
	for (n = 0; n <=9; n++)
	{
		for (c = "a"; c <= "z"; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
