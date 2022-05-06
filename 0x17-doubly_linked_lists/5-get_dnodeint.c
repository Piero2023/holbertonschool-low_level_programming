#include "lists.h"

/**
 * get_dnodeint_at_index - Finds the nth node of a dlistint_t linked list.
 * @head: Double pointer to struct.
 * @index: index of the node to return.
 *
 * Return: Returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
