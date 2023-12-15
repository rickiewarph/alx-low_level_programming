#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search from
 * @accept: the string to dearch for
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int m, n;

	for (m = 0 ; s[m] != '\0' ; m++)
	{
		for (n = 0 ; s[m] != accept[n] ; n++)
		{
			if (accept[n] == '\0')
				return (m);
		}
	}
	return (0);
}
