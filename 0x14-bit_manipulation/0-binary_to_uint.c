#include "main.h"

/**
 * binary_to_uint - function for the convertion of  a binary no.
 * to an unsigned int.
 * @b: points to a string with a binary no.
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b
 * that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
	}
	for (m = 0; b[m] != '\0'; m++)
	{
		numb <<= 1;
		if (b[m] == '1')
			numb += 1;
	}
	return (numb);
}

