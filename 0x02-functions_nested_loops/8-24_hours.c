#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack_bauer
 * Return: void
 */

void jack_bauer(void)
{
	int i, g;

	for (i = 0 ; i < 24 ; i++)
	{
		for (g = 0 ; g < 60 ; g++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
			_putchar('\n');
		}
	}
}
