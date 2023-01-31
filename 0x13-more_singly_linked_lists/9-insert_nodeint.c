#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: data
 *
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *newNode = NULL;
	listint_t *cont = NULL;
	size_t x;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	for (x = 0; x < idx - 1; x++)
	{
		if (!ptr)
		{
			free(newNode);
			return (NULL);
		}

		ptr = ptr->next;
	}

	cont = ptr;
	newNode->next = ptr->next;
	cont->next = newNode;
	return (newNode);
}

