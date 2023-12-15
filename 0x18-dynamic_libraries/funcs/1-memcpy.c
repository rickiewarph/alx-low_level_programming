#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination
 * @src: the source
 * @n: bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		dest[j] = src[j];
	return (dest);
}
