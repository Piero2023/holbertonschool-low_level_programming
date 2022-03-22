#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *new_new = *head;
	unsigned int x;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; new_new != NULL && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = new_new->next;
			new_new->next = new;
			return (new);
		}

		else
			new_new = new_new->next;
	}

	return (NULL);
}
