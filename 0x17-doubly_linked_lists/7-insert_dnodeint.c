#include "lists.h"

/**
 * insert_dnodeint_at_index - func to inserts a new node at a given position
 * @h: list's head
 * @idx: new node's index
 * @n: new node's value
 * Return: new node's address, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *qew;
	dlistint_t *head;
	unsigned int m;

	qew = NULL;
	if (idx == 0)
		qew = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					qew = add_dnodeint_end(h, n);
				else
				{
					qew = malloc(sizeof(dlistint_t));
					if (qew != NULL)
					{
						qew->n = n;
						qew->next = head->next;
						qew->prev = head;
						head->next->prev = qew;
						head->next = qew;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}

	return (qew);
}
