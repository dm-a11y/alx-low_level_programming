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

	while (s1[x] != && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	if (s1[x] == s2[x])
	{
		return (0);
	}
	return (s1[x] - s2[x]);
}
