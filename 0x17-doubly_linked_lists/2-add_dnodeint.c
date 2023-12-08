#include "lists.h"

/**
 * add_dnodeint - func to append a new node at the beginning of a dlistint_t list
 * @head: list's head
 * @n: element's value
 * Return: new element's address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *qew;
	dlistint_t *q;

	qew = malloc(sizeof(dlistint_t));
	if (qew == NULL)
		return (NULL);

	qew->n = n;
	qew->prev = NULL;
	q = *head;

	if (q != NULL)
	{
		while (q->prev != NULL)
			q = q->prev;
	}
	qew->next = q;

	if (q != NULL)
		q->prev = qew;

	*head = qew;

	return (qew);
}
