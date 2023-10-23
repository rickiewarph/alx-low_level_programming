#include "lists.h"

/**
 * find_listint_loop - function to find a loop from a linked list
 * @head: points to a linked list to look for
 * Return: address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail = head;
	listint_t *centipede = head;

	if (!head)
	return (NULL);
	while (snail && centipede && centipede->next)
	{
		centipede = centipede->next->next;
		snail = snail->next;
		if (centipede == snail)
	{
		snail = head;
		while (snail != centipede)
	{
		snail = snail->next;
		centipede = centipede->next;
	}
		return (centipede);
	}
	}
	return (NULL);
}

