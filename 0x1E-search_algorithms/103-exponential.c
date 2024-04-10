#include "search_algos.h"



/**
 * binary_search - searching for a val in a sorted array of int
 * using the binary search algo
 * @array: array of int
 * @left: Left elemnt
 * @right: Right elemnt
 * @value: val to search for
 * Return: ind of value or -1 if not found
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{

	size_t m;

	if (array == NULL)
		return (-1);

	while (right > left)
	{
		printf("Searching in array: ");
		for (m = left; m < right; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			right = m - 1;
		else
			left = m + 1;
	}

	return (-1);
}



/**
 * exponential_search -  a func searching for
 *  a value in a sorted array of int
 * @array: points to the first elemnt of the array
 * @size: size of the array to search in
 * @value: val to search for
 *Return: the ind of the searched element
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t m = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (m = 1; m < size && array[m] <= value; m *= 2)
			printf("Value checked array [%ld] = [%d]\n", m, array[m]);
	}

	right = m < size ? m : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", m / 2, right);
	return (_binary_search(array, m / 2, right, value));
}
