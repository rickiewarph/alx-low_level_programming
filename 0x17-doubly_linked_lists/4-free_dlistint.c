#include "lists.h"

/**
 * free_dlistint - func to free a dlistint_t list.
 * @head: points the list's head
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
