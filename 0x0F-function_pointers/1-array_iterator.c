#include "function_pointers.h"

/**
 * array_iterator - executes function on array elements
 * @array: the array in question
 * @size: array size
 * @action: pointer to the function needed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;
	for (m = 0; m < size; m++)
		action(array[m]);
}
