#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of arguments
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list arg;
	unsigned int m;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (m = 0; m < n; m++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
