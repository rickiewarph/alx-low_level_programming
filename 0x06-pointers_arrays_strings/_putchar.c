#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: the character to be printed
 *
 * Return: 1 on success
 * on error, return -1 and set error accordingly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
