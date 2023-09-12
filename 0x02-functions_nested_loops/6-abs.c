#include "main.h"

/**
 * _abs - computes the absolute of an integer
 * @b: function parameter
 * Return: -b or b
 */

int _abs(int b)
{
	if (b < 0)
		return (-b);
	else if (b >= 0)
	{
		return (b);
	}
	return (0);
}
