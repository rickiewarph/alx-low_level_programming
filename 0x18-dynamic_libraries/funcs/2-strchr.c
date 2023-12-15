#include "main.h"

/**
 * _strchr - function to locate a character within a string
 * @s: the string to be searched
 * @c: the character to search for
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
