#include "lists.h"

/**
 * dlistint_len - func to return no. of elements in double linked list
 * @h: list's head
 * Return: no. of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
