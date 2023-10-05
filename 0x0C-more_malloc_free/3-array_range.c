#include "main.h"

/**
 * array_range - creates array of integers
 * @min: the minimum number within an array
 * @max: the max number within an array
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *output;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size + 1);
	if (output == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}
