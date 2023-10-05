#include "main.h"

/**
 * malloc_checked - allocation of memory using malloc
 * @b: memory size
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	return (output);
}
