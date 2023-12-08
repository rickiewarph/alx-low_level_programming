#include "lists.h"

/**
 * add_dnodeint_end - func adding a new node at the end of a dlistint_t list
 * @head: list's head
 * @n: element's value
 * Return: new element's address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *q;
	dlistint_t *qew;

	qew = malloc(sizeof(dlistint_t));
	if (qew == NULL)
		return (NULL);

	qew->n = n;
	qew->next = NULL;

	q = *head;

	if (q != NULL)
	{
		while (q->next != NULL)
			q = q->next;
		q->next = qew;
	}
	else
	{
		*head = qew;
	}
	qew->prev = q;

	return (qew);
}
