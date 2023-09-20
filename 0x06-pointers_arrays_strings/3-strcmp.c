#include "main.h"

/**
 * _strcmp - comparison of two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0 ; s1[j] != '\0' || s2[j] != '\0' ; j++)
	{
		if (s1[j] != s2[j])
		{
			if (s1[j] < s2[j])
				return (s1[j] - s2[j]);
			else if (s2[j] < s1[j])
				return (s1[j] - s2[j]);
		}
	}
	return (0);
}
