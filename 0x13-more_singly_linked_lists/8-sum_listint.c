#include "lists.h"

/**
 * sum_listint - function to find sum of all the data in a listint_t list
 * @head: 1st node in the linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

