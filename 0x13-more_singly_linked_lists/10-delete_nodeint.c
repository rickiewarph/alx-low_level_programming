#include "lists.h"

/**
 * delete_nodeint_at_index - function deleting node within
 * a linked list at a particular index
 * @head: points to the 1st element in the list
 * @index: index to delete
 * Return: 1 (success), or -1 (failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int m = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (m < index - 1)
	{
		if (!tmp || !(tmp->next))
		return (-1);
		tmp = tmp->next;
		m++;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);
	return (1);
}

