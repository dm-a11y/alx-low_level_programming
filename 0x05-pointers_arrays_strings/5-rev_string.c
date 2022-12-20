#include "main.h"

/**
 * rev_string - reverse a string
 * @s: a pointer variable to the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int n = 0;
	int o = 0;
	int p;
	char *r = s;
	char q;

	while (*r != '\0')
	{
		r++;
		length++;
	}
	n = length - 1;
	for (; o < ((n / 2) + 1) ; o++)
	{
		p = (n - o);
		q = s[o];
		s[o] = s[p];
		s[p] = q;
	}
}
