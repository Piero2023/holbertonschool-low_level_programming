#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */

int pop_listint(listint_t **head)
{
	listint_t *new_new;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	new_new = (*head)->next;
	free(*head);
	*head = new_new;

	return (i);
}
