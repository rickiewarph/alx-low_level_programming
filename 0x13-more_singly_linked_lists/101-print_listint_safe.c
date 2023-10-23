#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function counting no. of unique nodes
 * @head: points to the head of the listint_t to be checked
 * Return: 0(if not looped) otherwise no. of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);
	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
	{
		t = head;
		while (t != h)
		{
			nodes++;
			t = t->next;
			h = h->next;
		}
		t = t->next;
		while (t != h)
		{
			nodes++;
			t = t->next;
		}
		return (nodes);
	}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function to safely print a listint_t list
 * @head: points to the head of the listint_t list
 * Return: no. of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	}
	else
	{
		for (ind = 0; ind < nodes; ind++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

