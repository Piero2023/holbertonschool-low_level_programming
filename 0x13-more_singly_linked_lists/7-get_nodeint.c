#include "lists.h"

/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index: which node to stop at
  * Return: pointer to the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_new = head;
	unsigned int i = 0;

	if (new_new == NULL)
		return (NULL);

	while (new_new != NULL && i < index)
	{
		new_new = new_new->next;
		i++;
	}

	return (new_new);
}

