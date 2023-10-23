#include "lists.h"

/**
 * listint_len - function that returns no. of elements
 * @h: link to traverse of type listint_t
 * Return: no. of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}

