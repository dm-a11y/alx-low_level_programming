#include "lists.h"

/**
 * pop_listint - deletes the head pf the node
 * @head: pointer to the head of the node
 *
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int x;

	if (head == NULL)
		return (0);

	if (*head)
	{
		x = ptr->n;
		*head = ptr->next;
		free(ptr);
	}
	else
		x = 0;

	return (x);
}
