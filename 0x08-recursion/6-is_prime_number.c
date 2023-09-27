#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - return if the number is a prime number
 * @n: the number the function checks
 * Return: integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for a prime number
 * @n: checks this number
 * @i: the number of iterations
 * Return: 1(prime) or 0(composite)
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if (n == i)
		return (1);
	return (check_prime(n, i + 1));
}
