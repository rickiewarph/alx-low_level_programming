#include "lists.h"

/**
 * add_nodeint - function that adds a new node at start of a linked list
 * @head: points to 1st node in a list
 * @n: figures to put in that new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	{
		if (!newnode)
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

