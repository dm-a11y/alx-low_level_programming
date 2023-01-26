#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the list
 * @str: string to be duplicated
 *
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *ptr;
	size_t charLen;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (charLen = 0; str[charLen]; charLen++)
		;

	newNode->len = charLen;
	newNode->next = NULL;
	ptr = *head;

	if (ptr == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newNode;
	}
	return (*head);
}
