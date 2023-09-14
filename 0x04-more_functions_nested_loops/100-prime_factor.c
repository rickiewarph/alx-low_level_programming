#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0 (success)
 */

int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (divisor = 3 ; divisor < (prime / 2) ; divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}
	printf("ld\n", prime);
	return (0);
}
