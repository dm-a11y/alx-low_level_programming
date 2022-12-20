#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: a pointer variable to the string to be reverse
 *
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

	while (*r != '\n')
	{

		r++;
		length++;
	}
	n = length - 1;
	for (; o < ((l / 2) + 1) ; o++)
	{
		x = (1 - o);
		q = s[o];
		s[o] = s[p];
		s[p] = q;
	}
}	
