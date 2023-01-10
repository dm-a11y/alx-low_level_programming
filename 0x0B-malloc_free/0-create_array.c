#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of char
 * @c: char to be input
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	chr = malloc(sizeof(char) * size);

	if (chr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		chr[i] = c;

	return (chr);
}


