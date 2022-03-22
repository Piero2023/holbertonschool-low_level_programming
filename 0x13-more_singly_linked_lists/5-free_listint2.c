#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer to head of list
  */

void free_listint2(listint_t **head)
{
	listint_t *new_new;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		new_new = (*head)->next;
		free(*head);
		*head = new_new;
	}

	*head = NULL;
}
