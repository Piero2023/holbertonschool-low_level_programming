#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - define function
  * @head: describe argument
  */

void free_listint(listint_t *head)
{
	listint_t *new_new;

	while (head != NULL)
	{
		new_new = head->next;
		free(head);
		head = new_new;
	}
}
