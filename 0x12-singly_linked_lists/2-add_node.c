#include "lists.h"

/**
 * add_node - adds a new node at the beginnig of the list
 * @head: head of the list
 * @str: string
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t charLen;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (charLen = 0; str[charLen]; charLen++)
		;

	newNode->len = charLen;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
