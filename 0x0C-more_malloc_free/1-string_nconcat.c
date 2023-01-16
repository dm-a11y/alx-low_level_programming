#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes of the string.
 *
 * Return: string 1.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, x, y;
	char *concat_str;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;

	if (n > s1len)
		n = s1len;

	concat_str = malloc(sizeof(char) * s1len + n + 1);

	if (concat_str == NULL)
		return (NULL);

	for (x = 0; x < s1len; x++)
		concat_str[x] = s1[x];

	for (y = 0; s2[y] && y < n; y++)
		concat_str[x + y] = s2[y];


	concat_str[x + y] = '\0';

	return (concat_str);
}
