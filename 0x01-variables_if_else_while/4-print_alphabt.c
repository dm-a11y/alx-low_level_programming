#include <stdio.h>

/**
 * main - main function
 *
 * main prints alphabets except q and e in lowercase followed by a new line.
 * Return: 0
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
{
	if (alp != 'e' && alp != 'q')
	{
		putchar(alp);
	}
		alp++;
}
	putchar('\n');
	return (0);
}
