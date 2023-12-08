#include "lists.h"

/**
 * sum_dlistint - func returning sum of all the
 * data (n) of a doubly linked list
 * @head: list's head
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}

	return (s);
}
