#include "lists.h"

/**
 * get_nodeint_at_index - function returning node at particular index
 * @head: 1st node in a linked list
 * @index: index to the node to return
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *tmp = head;

	while (tmp && m < index)
	{
		tmp = tmp->next;
		m++;
	}
	return (tmp ? tmp : NULL);
}

