#include "main.h"

/**
 * _memset - fills the first n bytes of the memory by constant byte
 *
 * @s: pointer to a memory area
 * @b: a constant byte
 * @n: the first number of bytes to the memory
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
