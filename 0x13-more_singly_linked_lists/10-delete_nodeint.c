#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the pointer to the head of the list
 * @index: the index of the node tha should be deleted
 *
 * Return: 1 if success, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *recent, *previous;

	if (!head || !*head)
		return (-1);

	recent = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(recent);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		recent = recent->next;
		if (recent == NULL)
			return (-1);
	}

	previous = recent->next;
	recent->next = previous->next;
	free(previous);
	return (1);
}
