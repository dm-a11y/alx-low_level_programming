#include "lists.h"

/**
 * list_len - returns the number of elements lin a linked list
 * @h: head of the list
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t noele;

	noele = 0;
	while (h != NULL)
	{
		h = h->next;
		noele++;
	}
	return (noele);
}
