#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer which point to a newley allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	unsigned int x, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		z++;

	concatstr = malloc(sizeof(char) * z);


	if (concatstr == NULL)
	{
		free(concatstr);
		return (NULL);
	}

	for (x = 0; s1[x]; x++)
		concatstr[y++] = s1[x];

	for (x = 0; s2[x]; x++)
		concatstr[y++] = s2[x];

	return (concatstr);
}

