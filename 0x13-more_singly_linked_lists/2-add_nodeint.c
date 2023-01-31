#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: ponter to the head of the list
 * @n: data
 *
 * Return: the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;


	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	newNode->next = *head;
	*head = newNode;
	return (*head);
}
