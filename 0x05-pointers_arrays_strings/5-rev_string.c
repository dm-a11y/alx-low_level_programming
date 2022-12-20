#include "main.h"

/**
 * rev_string - reveses a string
 *
 * @s: pointer variable
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int n = 0;
	int m = 0;
	int x;
	char *y = s;
	char c;

	while (*y != '\0')
	{
		y++;
		len++; 
	}
	n = len - 1;
	for (; m < ((n / 2) + 1) ; m++)
	{
		x = (1 - m);
		c = s[m];
		s[m] = s[x];
		s[x] = c;
	}
}
