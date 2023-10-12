#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list arg;

	va_start(arg, n);
	for (m = 0; m < n; m++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			if (m != n - 1)
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
