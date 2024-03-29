#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *recent = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		recent = *head;
		*head = (*head)->next;
		free(recent);
	}

	*head = NULL;
}
