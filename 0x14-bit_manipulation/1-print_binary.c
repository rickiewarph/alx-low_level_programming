#include "main.h"

/**
 * _pow - function that calculates base ^ power
 * @base: base
 * @power: power
 * Return: the value of base ^ power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int m;

	numb = 1;
	for (m = 1; m <= power; m++)
		numb *= base;
	return (numb);
}

/**
 * print_binary - function that prints a no. in binary notation
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, checker;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		checker = n & div;
		if (checker == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
