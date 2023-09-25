#include "main.h"

/**
 * _strpbrk - function to search a string for a set of bytes
 * @s: string to search in
 * @accept: string to search for
 * Return: pointer to a byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *z = accept;

		while (*z != '\0')
		{
			if (*s == *z)
				return (s);
			z++;
		}
		s++;
	}
	return (NULL);
}
