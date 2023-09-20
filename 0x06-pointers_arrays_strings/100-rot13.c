#include "main.h"

/**
 * rot13 - encoder rot13
 * @p: points to the string parameters
 * Return: *p
 */

char *rot13(char *p)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWZYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; p[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (p[i] == data1[j])
			{
				p[i] = datarot[j];
				break;
			}
		}
	}
	return (p);
}
