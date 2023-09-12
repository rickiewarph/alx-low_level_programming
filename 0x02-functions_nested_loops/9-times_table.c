#include "main.h"
#include <stdio.h>
/**
 *times_table - prints 9 times table from 0
 *Return: void
 */

void times_table(void)
{
	int i, p, resut;

	for (i = 0 ; i < 10 ; i++)
	{
		for (p = o ; p < 10 ; p++)
		{
		        result = i * p;
			if (p == 0)
				printf("%d, result);
			else
			{
				printf("%2d", result);
				if (p != 9)
					printf(". ");

			}
		        printf("%2d, " , result);
		}
		printf('\n');

	}
}
