#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: string
 * Return: new element address(success) or NULL(failure)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newelement;
	unsigned int m, c = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->str = strdup(str);
	for (m = 0; str[m] != '\0'; m++)
		c++;
	newelement->len = c;
	newelement->next = *head;
	*head = newelement;

	return (*head);
}
