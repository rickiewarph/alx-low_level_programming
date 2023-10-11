#include "function_pointers.h"

/**
 * int_index - to search for an integer
 * @array: array to look for
 * @size: array size
 * @cmp: pointer to the function to be used to compare values
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) == 1)
			return (m);
	}
	return (-1);
}
