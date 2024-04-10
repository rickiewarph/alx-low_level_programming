#include "search_algos.h"

/**
 * jump_search - func searching for a value
 * in a sorted array of int
 *
 * @array: a pointer to 1st elemnt of the array to search in
 * @size:  the no. of elemnts in array
 * @value: is the val to search for
 * Return: the 1st ind where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t m, step, jmp;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (m = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jmp, array[jmp]);
		m = jmp;
		jmp += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", m, jmp);

	jmp = jmp > size - 1 ? jmp : size - 1;
	for (; m < jmp && array[m] < value; m++)
		printf("Value checked array [%ld] = [%d]\n", m, array[m]);
	printf("Value checked array [%ld] = [%d]\n", m, array[m]);

	return (array[m] == value ? (int)m : -1);
}
