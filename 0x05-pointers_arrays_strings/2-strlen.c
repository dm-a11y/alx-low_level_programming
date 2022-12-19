#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}
