#include "main.h"

/**
 * _strdup - function to copy string to a new allocated space within the memory
 * @str: the string to be copied to a new memory
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		copy[i] = str[i];
	return (copy);
}
