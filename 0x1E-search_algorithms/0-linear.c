#include "search_algos.h"

/**
 * linear_search - searching for a value in a sorted array of int
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: ind of value or -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t incl;

	if (array == NULL)
		return (-1);
	for (incl = 0; incl < size; incl++)
	{
		printf("Value checked array[%ld] = [%d]\n", incl, array[incl]);
		if (array[incl] == value)
			return (incl);
	}
	return (-1);
}
