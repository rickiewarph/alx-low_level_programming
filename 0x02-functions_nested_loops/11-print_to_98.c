#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @n: this is the number to start from
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = 0; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
                                printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; 1 >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
                                printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d/n", n);
        
}