#include "search_algos.h"

/**
 * jump_list - Searching for an algo in a sorted singly
 *             linked list of ints using jump search.
 * @list: points to the  head of the linked list to search.
 * @size: The no. of nodes in the list.
 * @value: The val to search for.
 *
 * Return: If the val is absent or the head of the list is NULL, NULL.
 *         Otherwise, point to the first node where the value is located.
 *
 * Description: Printing a value every time it is compared in the lst.
 *              Uses the sq root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp, stp_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	stp_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (stp += stp_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
