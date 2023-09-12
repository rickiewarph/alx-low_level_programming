#include <stdio.h>

/**
 * main - entry stage
 *
 * Return: always 0(success)
 */

int main(void)
{
	int r;
	char j;

	for (r = 0 ; r < 10 ; r++)
		putchar(r + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
