#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a string to be duplicate
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dupstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dupstr = (char *)malloc(sizeof(char) * (i + 1));

	if (dupstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dupstr[j] = str[j];

	return (dupstr);
}
