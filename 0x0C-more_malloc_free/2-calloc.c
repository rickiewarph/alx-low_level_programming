#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: no. of members in the array
 * @size: array size
 * Return: pointer to new memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
