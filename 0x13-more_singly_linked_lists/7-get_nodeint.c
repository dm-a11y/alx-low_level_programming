#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x <= index)
		{
			if (x == index)
			{
				ptr = head;
				break;
			}
			head = head->next;
			x++;
		}
		else
			return (NULL);
	}

	return (ptr);
}
