#include "lists.h"

/**
 * delete_dnodeint_at_index - function deleting node at
 * index of a dlistint_t linked list
 * @head: list's head
 * @index: new node's index
 * Return: 1(success) or  -1(fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *q1;
	dlistint_t *q2;
	unsigned int m;

	q1 = *head;

	if (q1 != NULL)
		while (q1->prev != NULL)
			q1 = q1->prev;

	m = 0;

	while (q1 != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = q1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				q2->next = q1->next;

				if (q1->next != NULL)
					q1->next->prev = q2;
			}
			free(q1);
			return (1);
		}
		q2 = q1;
		q1 = q1->next;
		m++;
	}

	return (-1);
}
