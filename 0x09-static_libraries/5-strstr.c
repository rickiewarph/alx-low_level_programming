#include "main.h"

/**
 * _strstr - locates a string
 * @haystack: the string to search in
 * @needle: substring to search for
 * Return: pointer to a substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
