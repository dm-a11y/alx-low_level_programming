#include <stdio.h>

/**
 * main - main function
 * main prints lowercase alphabets in reverse followed by new line.
 * Return: 0
 */

int main(void)
{
	char alp;
	
	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}

	putchar('\n');
	return (0);
}
