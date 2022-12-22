#include "main.h"

/**
 * _strcmp - compares two strings
 * @dest: destination
 * @src: origin
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	while (y == x)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
			break;
		y = *(s1 + x) - *(s2 + x);
		x++;
	}

	return (y);
}
