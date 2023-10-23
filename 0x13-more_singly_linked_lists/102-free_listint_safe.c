#include "lists.h"

/**
 * free_listint_safe - function to free up a linked list
 * @h: points to the 1st node in the linked list
 * Return: no. of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;

	listint_t *tmp;

	if (!h || !*h)
	return (0);
	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		length++;
	}
		else
	{
		free(*h);
		*h = NULL;
		length++;
		break;
	}
	}
	*h = NULL;
	return (length);
}

