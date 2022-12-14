#include "main.h"

/**
 * main - main prints _putchar followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char c[8] = "_putchar";
	
	while (n < 8)
	{
		_putchar(c[n]);
		n++;
	}

	_putchar('\n');
	return (0);
}
