#include "lists.h"

/**
  * sum_listint - sums all elements of a list
  * @head: pointer to the head of the list
  * Return: sum of all elements
  */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *new_new = head;

	while (new_new != NULL)
	{
		i = i + new_new->n;
		new_new = new_new->next;
	}

	return (i);
}
