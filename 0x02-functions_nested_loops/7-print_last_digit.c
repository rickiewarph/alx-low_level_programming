#include "main.h"
/**
 *print_last_digit - to print the last digit
 *@j: parameter of the function
 *Return: k
 */

int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (j < 0)
		k = -k;
	_putchar(k + '0');
	return (k);

}
