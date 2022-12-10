#include <stdio.h>

/**
 *
 * main - main function
 * main prints all the numbers of hexadeciaml in lowercase.
 * Return: 0
 */


int main(void)

{

	int n;
	char lc;


	for (n = 48; n < 58; n++)
	
	{	
		putchar(n);

	}

	for (lc = 'a'; lc <= 'f'; lc++)
	
	{

		putchar(lc);

	}

	putchar('\n');

	return (0);
}
