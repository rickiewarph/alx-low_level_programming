#include "lists.h"

/**
 * insert_nodeint_at_index - functio to insert new node in a linked list,
 * at a particular position
 * @head: points to the 1st node in the list
 * @idx: point where the new node is added
 * @n: data to put in the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *newnode;
	listint_t *tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
	return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (m = 0; tmp && m < idx; m++)
	{
		if (m == idx - 1)
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
		return (newnode);
	}
		else
		tmp = tmp->next;
	}
	return (NULL);
}

