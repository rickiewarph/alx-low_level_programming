#include "lists.h"

/**
 * pop_listint -function to delete head node of a linked list
 * @head: points to the 1st element in the linked list
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numb;

	{
		if (!head || !*head)
		return (0);
	}
	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (numb);
}

