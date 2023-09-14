#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: times the '\' is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, p;

		for (i = 0; i < n ; i++)
		{
			for (p = 0 ; p <= i ; p++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
