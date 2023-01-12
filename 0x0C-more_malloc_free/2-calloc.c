#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: an array
 * @size: bytes of an array
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		ptr[x] = 0;
	return (ptr);
}
