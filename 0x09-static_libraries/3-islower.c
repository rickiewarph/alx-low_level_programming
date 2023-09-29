#include "main.h"

/**
 *_islower - checks for a lowercase character
 *@c: parameter being checked
 *Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
