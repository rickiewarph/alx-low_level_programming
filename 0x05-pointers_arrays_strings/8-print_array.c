#include "main.h"

/**
 * print_array - prints n elemts of an array
 * @a: array the function uses
 * @n: elements the function prints
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
