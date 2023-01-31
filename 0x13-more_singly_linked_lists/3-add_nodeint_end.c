#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to the head of the list
 * @n: data
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *ptr = NULL;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = newNode;
	return (*head);
}
