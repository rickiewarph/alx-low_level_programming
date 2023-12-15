#include "main.h"

/**
 * _strncat - concatenation of two strings
 * @dest: string destination
 * @n: concatenation number of bytes
 * @src: string source
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int j;

	for (j = 0 ; j < n && *src != '\0' ; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] = '\0';
	return (dest);
}
