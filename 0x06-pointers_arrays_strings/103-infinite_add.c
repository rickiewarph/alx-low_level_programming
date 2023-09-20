#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: storage buffer
 * @size_r: buffer size
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i, j, k = 0;
	int val1, val2, temp_tot, len1 = 0, len2 = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	i = len1 - 1;
	j = len2 - 1;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || overflow)
	{
		val1 = (i >= 0) ? (n1[i] - '0') : 0;
		val2 = (j >= 0) ? (n2[j] - '0') : 0;

		temp_tot = val1 + val2 + overflow;
		overflow = temp_tot / 10;

		if (k < size_r - 1)
			r[k] = (temp_tot % 10) + '0';

		k++;
		i--;
		j--;
	}
	if (k == size_r)
		return (0);
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}

