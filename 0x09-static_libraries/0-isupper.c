#include "main.h"

/**
 * _isupper - uppercase character checker
 * @c: parameter to be checked
 * Return: 1 (success) 0 (failure)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
