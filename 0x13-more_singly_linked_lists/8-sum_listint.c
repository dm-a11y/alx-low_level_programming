#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: the head of the list
 *
 * Return: returns the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	size_t sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
