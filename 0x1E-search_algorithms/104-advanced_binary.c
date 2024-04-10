#include "search_algos.h"


/**
  * advanced_binary_recursive - recursively searching for a val in a sorted
  *                             array of ints using binary search.
  * @array: Points to first elemnt of [sub]array to search.
  * @left: The starting ind of the [sub]array to search.
  * @right: The ending ind of the [sub]array to search.
  * @value: The val to search for.
  *
  * Return: If the val is not present, -1.
  *         Otherwise, the ind where the val is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t m;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (m = left; m < right; m++)
		printf("%d, ", array[m]);
	printf("%d\n", array[m]);

	m = left + (right - left) / 2;
	if (array[m] == value && (m == left || array[m - 1] != value))
		return (m);
	if (array[m] >= value)
		return (advanced_binary_recursive(array, left, m, value));
	return (advanced_binary_recursive(array, m + 1, right, value));
}



/**
 *advanced_binary -  a func searching for a
 * value in a sorted array of int.
 *
 * @array: points to the first elemnt in the array
 * @size: Size of the array to search in
 * @value: Elemnt to be searched
 * Return: return indx of searched element
 */

int advanced_binary(int *array, size_t size, int value)
	{
		if (array == NULL || size == 0)
			return (-1);

		return (advanced_binary_recursive(array, 0, size - 1, value));
	}
