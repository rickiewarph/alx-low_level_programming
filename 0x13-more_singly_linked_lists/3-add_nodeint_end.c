#include "lists.h"

/**
 * add_nodeint_end - function adding a node at the end of a linked list
 * @head: points to the 1st element in the list
 * @n: data to put in the new element
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = newnode;

	return (newnode);
}

