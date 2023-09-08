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
		if (r == 9)
			putchar(r + '0');
		else
		{
		      putchar(r + '0');
		      putchar(',');
		      putchar(' ');
	        }
	}
	return (0);
}
