#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	int n = 0;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (n = 0; n < 26; n++)
	{
		_putchar(alpha[n]);
		n++;
	}
	_putchar('\n');
}
