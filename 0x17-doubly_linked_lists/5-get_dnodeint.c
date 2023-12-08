#include "lists.h"

/**
 * get_dnodeint_at_index - func returning the nth
 * node of a dlistint_t linked list.
 * @head: pointer to the list's head
 * @index: node's index to search for, starting from 0
 * Return: nth node or null
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int breadth;
	dlistint_t *temp;

	breadth = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == breadth)
	return (temp);
	breadth++;
	temp = temp->next;
	}
	return (NULL);
}
