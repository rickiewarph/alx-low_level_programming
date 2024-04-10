#include "search_algos.h"

/**
 *interpolation_search - func that  searching
 *for a value in a sorted array of int
 *@array: points to the 1st elemnt of the array to search in
 *@size: no. of elemnts in array
 *@value: the val to search for
 *Return: first ind where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t m, n, r;

	if (array == NULL)
		return (-1);

	for (n = 0, (r = size - 1); r >= n;)
	{
		m = n + (((double)(r - n) / (array[r] - array[n])) * (value - array[n]));
		if (m < size)
		{
			printf("Value checked array [%ld] = [%d]\n", m, array[m]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", m);
			break;
		}

		if (array[m] == value)
			return (m);
		if (array[m] > value)
			r = m - 1;
		else
			n = m + 1;
	}
	return (-1);

}
