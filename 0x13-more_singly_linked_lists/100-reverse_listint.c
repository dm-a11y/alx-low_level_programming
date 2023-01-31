#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: a pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *recent = *head, *previous = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head != NULL)
	{
		*head = recent->next;
		recent->next = previous;
		previous = recent;
		recent = *head;
	}

	*head = previous;
	return (*head);
}
