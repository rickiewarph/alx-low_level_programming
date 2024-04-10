#include "search_algos.h"

/**
 * linear_skip - Searching for an algo in a sorted singly
 *               linked list of int using linear skip.
 * @list: Points to the  head of the linked list to search.
 * @value: The val to search for.
 *
 * Return: If the val is absent or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the 1st node where the value is located.
 *
 * Description: Prints a val every time it is compared in the list.
 *              Uses the sq root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jmp;

	if (list == NULL)
		return (NULL);

	for (node = jmp = list; jmp->next != NULL && jmp->n < value;)
	{
		node = jmp;
		if (jmp->express != NULL)
		{
			jmp = jmp->express;
			printf("Value checked at index [%ld] = [%d]\n",
				jmp->index, jmp->n);
		}
		else
		{
			while (jmp->next != NULL)
				jmp = jmp->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jmp->index);

	for (; node->index < jmp->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
