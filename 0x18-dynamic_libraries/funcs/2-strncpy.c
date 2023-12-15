#include "main.h"

/**
 * _strncpy - copies the string in question
 * @dest: string destination
 * @n: required number of bytes to be copied
 * @src: string source
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
