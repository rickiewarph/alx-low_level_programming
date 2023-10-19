#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @str: string
 * @head: head node
 * Return: address of the new element(success) or NULL(failure)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement, *temp;
	unsigned int m, c = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->str = strdup(str);
	for (m = 0; str[m] != '\0'; m++)
		c++;
	newelement->len = c;
	newelement->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = newelement;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newelement;
	}
	return (*head);
}
