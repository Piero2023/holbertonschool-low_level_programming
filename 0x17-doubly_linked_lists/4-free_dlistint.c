#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Double pointer to struct.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
