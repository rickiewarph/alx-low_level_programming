#include "main.h"

/**
 * alloc_grid - function for a 2-dimensional array
 * @width: number of columns within the array
 * @height: number of rows within the array
 * Return: array pointer
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			free(output);
			for (j = 0 ; j <= height ; j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			output[i][j] = 0;
	}
	return (output);
}
