#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0(success)
 */

int main(void)
{
	int r;

	for (r = 0 ; r < 10 ; r++)
	{
		putchar(r + '0');
		if (r != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
        putchar('\n');
	return (0);
}
