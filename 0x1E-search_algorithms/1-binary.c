#include "search_algos.h"

/**
 * binary_search - searching for a value in a sorted array of ints
 * using the binary search alg
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t m, lft, rght;

	if (array == NULL)
		return (-1);

	for (lft = 0, rght = size - 1; rght >= lft;)
	{
		printf("Searching in array: ");
		for (m = lft; m < rght; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = lft + (rght - lft) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			rght = m - 1;
		else
			lft = m + 1;
	}

	return (-1);
}
