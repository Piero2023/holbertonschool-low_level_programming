#include "lists.h"

/**
 * sum_dlistint - sum all data (n) in a linked list dlistint_t.
 * @head: Double pointer to struct.
 *
 * Return: 0 if empty or sum of n value
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}

	return (i);
}
