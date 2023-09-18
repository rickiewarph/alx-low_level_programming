#include "main.h"

/**
 * puts_half - half print the string
 * @str: parameter the function prints
 * Return: void
 */

void puts_half(char *str)
{
	int i, m, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	m = (count - 1) / 2;
	for (i = m + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
