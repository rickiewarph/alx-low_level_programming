#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point of the program
 * Return: always 0(success)
 */

int main(void)

{
	int r, q;

	for (r = '0'; r < '9'; r++)
	{
	for (q = r + 1; q <= '9'; q++)
	{
	if (q != r)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
