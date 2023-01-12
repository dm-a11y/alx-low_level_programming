#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: a variable to be allocated
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}

