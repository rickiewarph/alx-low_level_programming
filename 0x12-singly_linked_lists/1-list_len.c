#include "lists.h"

/**
 * list_len - prints number of elements in a linked list_t list
 * @h: the node's head
 * Return: node length
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
