#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: head of the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *recent;

	while (head != NULL)
	{
		recent = head;
		head = head->next;
		free(recent);
	}
}
