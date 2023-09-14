#include "main.h"

/**
 * print_line - drawa a straight line
 * @n: times '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i < n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
