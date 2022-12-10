#include <stdio.h>

/**
 * main - main function
 * main prints alphabets in lower and upper case followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	
	putchar('\n');
	return (0);
}
