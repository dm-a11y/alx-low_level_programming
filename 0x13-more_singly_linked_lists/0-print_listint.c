#include "lists.h"

/**
 * print_listint - prints all the elements of  listint_t list.
 * @h: head of the list
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;

	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
