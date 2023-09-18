#include "main.h"

/**
 * puts2 - prints every other character within a string
 * @str: function prints this string
 * Return: void
 */

void puts2(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
