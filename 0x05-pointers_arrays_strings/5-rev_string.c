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
	int x = 0;
	int y = 0;
	char tmp[1002];

	while (s[x] != '\n')
		x++;
	for (; x > 0; x--)
	{
		tmp[y] = s[x - 1];
		y++;
	}
	while (x < y)
	{
		s[x] = tmp[x];
		x++;
	}
}
